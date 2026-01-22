// 函数: sub_40bca0
// 地址: 0x40bca0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = *arg2

while (true)
    int32_t result = sub_404e48(arg1)
    
    if (ebx s> result || *(arg1 + ebx - 1) != 0x20)
        *arg2 = ebx
        return result
    
    ebx += 1
