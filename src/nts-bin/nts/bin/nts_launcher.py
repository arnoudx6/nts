"""NTS Launcher"""

# Built-in imports

# Common imports

# App imports
from nts import core
from nts.bin import utils


def main() -> None:
    """The main function of the app

    #This

    Args:

    Returns:
        None
    """

    # Parse app arguments
    utils.parse_app_arguments()

    # Import the package that contains the worker.
    utils.import_package()


def cli() -> None:
    """The app entrypoint

    This function handles the start of the application. Mostly arguments parsing.

    Args:

    Returns:
        None
    """
    print("hello world")


if __name__ == "__main__":
    # This is triggered when the app is started via Python instead of the app entrypoint.
    # Call the cli() function so the app always starts the same way.
    cli()
