"""This is the """

# Built-in imports
from argparse import ArgumentParser

# Common imports

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

    argument_parser = ArgumentParser()
    argument_parser.prog = "app"
    argument_parser.description = "Processes incoming shot from the target"
    argument_parser.epilog = "For more documentation visit the NTS Github"
    argument_parser.add_argument(
        "-c", "--config", action="store", required=True, help="The config filepath"
    )
    argument_parser.add_argument("-v", "--verbose", action="store_true")

    arguments = argument_parser.parse_args()

    main()


if __name__ == "__main__":
    # This is triggered when the app is started via Python instead of the app entrypoint.
    # Call the cli() function that is used ba
    cli()
