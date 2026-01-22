// 函数: sub_405680
// 地址: 0x405680
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

HLOCAL hMem = 0xc

if (data_413098 != 0xffffffff)
    hMem = TlsGetValue(data_413098)
    
    if (hMem != 0)
        return LocalFree(hMem)

return hMem
