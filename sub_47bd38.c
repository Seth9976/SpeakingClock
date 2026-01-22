// 函数: sub_47bd38
// 地址: 0x47bd38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edx
sub_459bd4(arg1, edx)
char eax_2

if (arg1[0x6c].b != 0 && *(arg1 + 0x1b1) != 0)
    eax_2 = (*(*arg1 + 0x50))()

int32_t ebx

if (arg1[0x6c].b == 0 || *(arg1 + 0x1b1) == 0 || eax_2 == 0 || *(arg1 + 0x1a1) != 0)
    ebx = 0
else
    ebx.b = 1

char result

if (ebx.b == 0)
    result = sub_465ac4(sub_4659bc())

if (ebx.b != 0 || result != 0)
    *(arg1 + 0x1b1) = 0
    result = (*(*arg1 + 0x50))()
    
    if (result != 0)
        return (*(*arg1 + 0x84))()

return result
