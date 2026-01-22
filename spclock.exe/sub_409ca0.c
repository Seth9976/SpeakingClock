// 函数: sub_409ca0
// 地址: 0x409ca0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edx = arg2 - arg1
char* result = arg1

if ((arg1 & 1) == 0)
    goto label_409ccd

uint32_t ecx_1 = zx.d(*(edx + arg1))
*arg1 = ecx_1.b

if (ecx_1 != 0)
    arg1 = &arg1[1]
label_409ccd:
    uint32_t i
    
    do
        uint32_t ecx_2 = zx.d(*(edx + arg1))
        
        if (ecx_2 == 0)
            *arg1 = ecx_2.b
            return result
        
        i = zx.d(*(edx + arg1))
        *arg1 = i.w
        arg1 = &arg1[2]
    while (i u> 0xff)

return result
