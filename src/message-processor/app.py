"""This is the """

# Built-in imports

# Common imports

# App imports
from message_processor import core
from message_processor import arguments
from nts import api
from nts import broker


def main(
    config_filepath: str,
    launch_arguments,
) -> None:
    """The main function of the app

    Args:
        config_filepath(str): The filepath for the YAML configuration file.
        launch_arguments:
    Returns:
        None
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

    # Create a new runner instance
    runner = core.Runner(config=config, nts_api=nts_api, nts_broker=nts_broker)

    # Start the runner
    runner.start()


def launch() -> None:
    """The app entrypoint

    This function handles the start of the application. Mostly arguments parsing.

    Args:

    Returns:
        None
    """

    # Parse the launch arguments from the configfile, env variables and cli arguments
    launch_arguments: tuple = arguments.parse()

    main(config_filepath=launch_arguments.config, launch_arguments=launch_arguments)


if __name__ == "__main__":
    # This is triggered when the app is started via Python instead of the app entrypoint.
    # Call the cli() function that is used ba
    launch()
