// 函数: sub_4056cc
// 地址: 0x4056cc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

uint32_t dwTlsIndex = data_413098

if (data_41465c == 0)
    TEB* fsbase
    return *(fsbase->ThreadLocalStoragePointer + (dwTlsIndex << 2))

int32_t eax_4 = TlsGetValue(dwTlsIndex)

if (eax_4 != 0)
    return eax_4

sub_405610()
int32_t eax_2 = TlsGetValue(data_413098)

if (eax_2 == 0)
    return data_41466c

return eax_2
