// 函数: sub_4098b8
// 地址: 0x4098b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL i

do
    if ((*(arg1 + 0x20) & *(arg1 + 0x18)) == 0)
        FILETIME var_10
        FileTimeToLocalFileTime(&arg1[0x1a], &var_10)
        FileTimeToDosDateTime(&var_10, &arg1[1], arg1)
        int32_t edx_2 = *(arg1 + 0x3c)
        *(arg1 + 8) = *(arg1 + 0x40)
        *(arg1 + 0xc) = edx_2
        *(arg1 + 0x10) = *(arg1 + 0x20)
        sub_404df8(&arg1[0xa], &arg1[0x26], 0x104)
        return NO_ERROR
    
    i = FindNextFileA(*(arg1 + 0x1c), &arg1[0x10])
while (i != 0)
return GetLastError()
