import time

from nts import api
from nts import broker


class Runner:
    """The core runner that actually does stuff"""

    def __init__(
        self,
        config: str,
        nts_api: api.API,
        nts_broker: broker.Broker,
    ):
        self.config = config
        self.nts_api = nts_api
        self.nts_broker = nts_broker

    def start(self):
        while True:
            print("Iteration")
            time.sleep(1)

    def stop(self):
        pass
