// 函数: sub_4050c0
// 地址: 0x4050c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edi = arg3
void* result = j_sub_40502c(arg1)
void* edx = *arg1

if (edx != 0)
    int32_t ecx = *(edx - 4)
    
    if (arg2 s>= 1 && arg2 - 1 s< ecx && edi s> 0)
        void* ecx_1 = ecx - (arg2 - 1)
        
        if (edi s> ecx_1)
            edi = ecx_1
        
        void* edx_1 = edx + arg2 - 1
        sub_4030d0(edi + edx_1, edx_1, ecx_1 - edi)
        return sub_4052a8(arg1, *(*arg1 - 4) - edi)

return result
