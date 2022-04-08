class LoginError(Exception):
    def __init__(self, what):
        super().__init__(what)


class SessionError(Exception):
    def __init__(self, what):
        super().__init__(what)


class UnexpectedResultError(Exception):
    def __init__(self, what):
        super().__init__(what)


class NoDataError(Exception):
    def __init__(self, what):
        super().__init__(what)


class ManualInterrupt(Exception):
    def __init__(self, what):
        super().__init__(what)
