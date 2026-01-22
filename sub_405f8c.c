// 函数: sub_405f8c
// 地址: 0x405f8c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* lpsz = arg1

while (true)
    char ebx_1 = *lpsz
    
    if (ebx_1 == 0 || ebx_1 == 0x5c)
        return lpsz
    
    lpsz = CharNextA(lpsz)
