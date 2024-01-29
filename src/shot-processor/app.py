"""This is the """

# Built-in imports

# Common imports
import configargparse  # type: ignore

# App imports
from shot_processor import core
from nts import api
from nts import broker


def main(
    launch_arguments,
) -> None:
    """The main function of the app

    :return:
    """
    config: str = ""

    # Create an object with broker connection details
    nts_broker = broker.Broker(
        host=launch_arguments.broker_host,
        port=launch_arguments.broker_port,
        username=launch_arguments.broker_username,
        password=launch_arguments.broker_password,
    )

    # Create an object with API connection details
    nts_api = api.API(
        host=launch_arguments.api_host,
        port=launch_arguments.api_port,
        key=launch_arguments.api_key,
    )

    runner = core.Runner(config, nts_api, nts_broker)
    runner.start()


def cli() -> None:
    """The app entrypoint

    This function handles the start of the application. Mostly arguments parsing.

    :return:
    """

    # Set up an argument parser that parses command-line arguments
    # ConfigArgeParse docs: https://pypi.org/project/ConfigArgParse/

    # Create a parser instance and configure the config type as yaml
    config_parser = configargparse.ArgParser()
    config_parser.config_file_parser_class = configargparse.YAMLConfigFileParser

    # Configure the app help documentation
    config_parser.prog = "app"
    config_parser.description = "Processes incoming shot from the target"
    config_parser.epilog = "For more documentation visit the NTS Github"

    # Config file path
    config_parser.add_argument(
        "-c",
        "--config",
        required=True,
        is_config_file=True,
        help="The config file path",
    )

    # Create an argument group for the message broker configuration
    broker_config_group = config_parser.add_argument_group(
        title="Message broker settings"
    )

    # Broker hostname
    broker_config_group.add_argument(
        "-bhost",
        "--broker_host",
        required=False,
        action="store",
        type=str,
        help="The hostname or dns-name of the broker service",
    )

    # Broker port
    broker_config_group.add_argument(
        "-bport",
        "--broker_port",
        required=True,
        action="store",
        type=int,
        help="The port number of the broker service",
    )

    # Broker username
    broker_config_group.add_argument(
        "-buser",
        "--broker_username",
        required=True,
        action="store",
        type=str,
        help="The username for the broker service",
    )

    # Broker password
    broker_config_group.add_argument(
        "-bpwd",
        "--broker_password",
        required=True,
        action="store",
        type=str,
        help="The password for the broker service",
    )

    # Create an argument group for the message broker configuration
    api_config_group = config_parser.add_argument_group(title="API settings")

    # API hostname
    api_config_group.add_argument(
        "-ahost",
        "--api_host",
        required=True,
        action="store",
        type=str,
        help="The hostname or dns-name of the API",
    )

    # API port
    api_config_group.add_argument(
        "-aport",
        "--api_port",
        required=True,
        action="store",
        type=int,
        help="The port number of the API",
    )

    # API key
    api_config_group.add_argument(
        "-akey",
        "--api_key",
        required=True,
        action="store",
        type=str,
        help="The key for the API",
    )

    # Retrieve command-line arguments
    launch_arguments = config_parser.parse_known_args()[0]

    # print(arguments[0])
    main(launch_arguments)


if __name__ == "__main__":
    # This is triggered when the app is started via Python instead of the app entrypoint.
    # Call the cli() function that is used ba
    cli()
