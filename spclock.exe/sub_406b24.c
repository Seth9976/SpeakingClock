// 函数: sub_406b24
// 地址: 0x406b24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_406b1c()

if (data_4aa790 == 0xffffffff)
    sub_404ac8()
    noreturn

HLOCAL lpTlsValue = sub_406b10(0x38)

if (lpTlsValue != 0)
    return TlsSetValue(data_4aa790, lpTlsValue)

sub_404ac8()
noreturn
