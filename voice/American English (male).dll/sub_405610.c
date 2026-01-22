// 函数: sub_405610
// 地址: 0x405610
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

sub_405608()

if (data_413098 == 0xffffffff)
    sub_4039e0()
    noreturn

HLOCAL lpTlsValue = sub_4055fc(0xc)

if (lpTlsValue != 0)
    return TlsSetValue(data_413098, lpTlsValue)

sub_4039e0()
noreturn
