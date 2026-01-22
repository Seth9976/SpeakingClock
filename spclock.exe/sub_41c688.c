// 函数: sub_41c688
// 地址: 0x41c688
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t var_c = arg2
int32_t* result
uint32_t ebx_1

do
    ebx_1 = var_c
    uint32_t esi_1 = arg1
    uint32_t var_14_1 = (var_c + arg1) u>> 1
    
    while (true)
        if (arg4() s< 0)
            ebx_1 += 1
        else
            while (true)
                result = arg4()
                
                if (result s<= 0)
                    break
                
                esi_1 -= 1
            
            if (esi_1 s>= ebx_1)
                result = sub_41c390(arg3, ebx_1, esi_1)
                
                if (ebx_1 == var_14_1)
                    var_14_1 = esi_1
                else if (esi_1 == var_14_1)
                    var_14_1 = ebx_1
                
                ebx_1 += 1
                esi_1 -= 1
            
            if (esi_1 s< ebx_1)
                break
    
    if (esi_1 s> var_c)
        result = sub_41c688(arg4)
    
    var_c = ebx_1
while (ebx_1 s< arg1)
return result
