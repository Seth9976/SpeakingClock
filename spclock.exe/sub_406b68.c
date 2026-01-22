// 函数: sub_406b68
// 地址: 0x406b68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t dwTlsIndex = data_4aa790

if (data_4af7f0 == 0)
    TEB* fsbase
    return *(fsbase->ThreadLocalStoragePointer + (dwTlsIndex << 2))

int32_t eax_4 = TlsGetValue(dwTlsIndex)

if (eax_4 != 0)
    return eax_4

sub_406b24()
int32_t eax_2 = TlsGetValue(data_4aa790)

if (eax_2 == 0)
    return data_4af7f8

return eax_2
