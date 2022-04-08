from SSException import *


def willLogin(what):
    def warpperA(func):
        def warpperB(self, *args, **kwargs):
            res = func(self, *args, **kwargs)
            self.logged.add(what)
            return res
        return warpperB
    return warpperA


def loginRequired(what):
    def warpperA(func):
        def warpperB(self, *args, **kwargs):
            if what in self.logged:
                return func(self, *args, **kwargs)
            else:
                raise LoginError(f"尚未登录 {what}")
        return warpperB
    return warpperA
