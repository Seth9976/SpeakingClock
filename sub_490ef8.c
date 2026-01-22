// 函数: sub_490ef8
// 地址: 0x490ef8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t result = sub_45b7f4(arg1)

if (result - 1 s>= 0)
    int32_t esi_2 = result
    int32_t ebx_1 = 0
    int32_t i
    
    do
        result = sub_403df4(sub_45b7b8(arg1, ebx_1), &data_453234)
        
        if (result.b != 0)
            int32_t* eax_4 = sub_45b7b8(arg1, ebx_1)
            sub_403e18(eax_4, &data_453234)
            
            if (sub_45fc28(eax_4) != 0)
                sub_458ac8(eax_4, 0)
            
            result = sub_490ef8(arg2)
        
        ebx_1 += 1
        i = esi_2
        esi_2 -= 1
    while (i != 1)

return result
