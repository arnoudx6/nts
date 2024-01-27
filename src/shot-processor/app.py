"""This is the """

# Built-in imports

# Common imports
import configargparse
import yaml

# App imports


def main() -> None:
    """The main function of the app

    :return:
    """
    print("Hello world")


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

    # Broker hostname
    config_parser.add_argument(
        "-bhost",
        "--broker_host",
        required=True,
        action="store",
        type=str,
        help="The hostname or dns-name of the broker service",
    )

    # Broker hostname
    config_parser.add_argument(
        "-bport",
        "--broker_port",
        required=True,
        action="store",
        type=int,
        help="The port number of the broker service",
    )

    # Broker username
    config_parser.add_argument(
        "-buser",
        "--broker_username",
        required=True,
        action="store",
        type=str,
        help="The port number of the broker service",
    )

    # Broker password
    config_parser.add_argument(
        "-bpwd",
        "--broker_username",
        required=True,
        action="store",
        type=str,
        help="The port number of the broker service",
    )

    # Retrieve command-line arguments
    arguments = config_parser.parse_known_args()[0]
    print(arguments)

    main()


if __name__ == "__main__":
    # This is triggered when the app is started via Python instead of the app entrypoint.
    # Call the cli() function that is used ba
    cli()
