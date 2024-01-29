# Built-in imports

# Common imports
import configargparse  # type: ignore

# App imports


def parse() -> tuple:
    """Parse arguments

    This is function parses the YAML config file, ENV variables and CLI arguments.
    Supersedence order: YAML configfile < ENV variables < CLI arguments.

    Args:

    Returns:
        launch_arguments (tuple)
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

    return launch_arguments
