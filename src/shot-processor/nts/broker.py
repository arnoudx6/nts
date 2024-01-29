# Built-in imports

# Common imports

# App imports


class Broker:
    def __init__(
        self,
        host: str,
        port: int,
        username: str,
        password: str,
    ):
        self.host = host
        self.port = port
        self.username = username
        self.password = password
