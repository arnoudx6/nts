"""NTS Launcher"""

# Built-in imports
import importlib

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
    app_arguments: tuple = utils.parse_app_arguments()

    # Retrieve the package to load from the app arguments
    module: str = app_arguments.module

    # Import the package that contains the worker.
    lib = importlib.import_module(name=module)
    lib.worker()


def cli() -> None:
    """The app entrypoint

    This function handles the start of the application. Mostly arguments parsing.

    Args:

    Returns:
        None
    """
    print("hello world")
    main()


if __name__ == "__main__":
    # This is triggered when the app is started via Python instead of the app entrypoint.
    # Call the cli() function so the app always starts the same way.
    cli()
