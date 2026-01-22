// 函数: sub_4054f8
// 地址: 0x4054f8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t temp0 = data_4145b4
data_4145b4 -= 1

if (temp0 u>= 1)
    return 

data_413008 = 2
data_414014 = RaiseException
data_414018 = RtlUnwind
data_414046 = 2
data_414000 = sub_4046b8

if (sub_402d20() != 0)
    sub_402d50()

sub_402e14()
data_41404c = 0xd7b0
data_414218 = 0xd7b0
data_4143e4 = 0xd7b0
data_41403c = GetCommandLineA()
data_414038 = sub_401278()

if ((GetVersion() & 0x80000000) == 0x80000000)
    data_4145b8 = sub_405430(GetThreadLocale())
else if (zx.w(GetVersion()) u<= 4)
    data_4145b8 = sub_405430(GetThreadLocale())
else
    data_4145b8 = 3

data_414030 = GetCurrentThreadId()
