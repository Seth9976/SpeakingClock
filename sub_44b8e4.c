// 函数: sub_44b8e4
// 地址: 0x44b8e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = arg3
char ebx = arg3.b
void* result = sub_44e490(arg1)

if (result - 1 s>= 0)
    void* esi_2 = result
    int32_t ebp_1 = 0
    void* i
    
    do
        if (ebp_1 s>= arg2)
            result = sub_44e4a0(arg1, ebp_1)
            
            if (ebx u> *(result + 0x3f))
                result = sub_44e4a0(arg1, ebp_1)
                *(result + 0x3f) = ebx
        else
            result = sub_44e4a0(arg1, ebp_1)
            
            if (ebx u< *(result + 0x3f))
                result, ebx = sub_44a8ec(data_4ac05c)
        
        ebp_1 += 1
        i = esi_2
        esi_2 -= 1
    while (i != 1)

return result
