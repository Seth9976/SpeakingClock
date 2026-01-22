// 函数: sub_464fac
// 地址: 0x464fac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ebx = arg2.b
void* result = data_4ac4e0

if (*(result + 0xc) != 0 && ebx != 3)
    if (ebx == 0)
        return sub_464f90(arg1, 0)
    
    arg2.b = 1
    result = sub_464f90(arg1, arg2)
    
    if (data_4ab990 != 0)
        result = data_4b1ca0(arg1)
        
        if (result != 0)
            int32_t var_14
            int32_t var_10
            data_4b1ca8(result, &var_14, &var_10)
            
            if (ebx == 1)
                data_4b1cb0(result, 0)
            else if (ebx == 2)
                data_4b1cb0(result, 1)
            else
                data_4b1cb0(result, 1)
                data_4b1ca8(result, &var_14, &var_10)
                var_14 = (var_14 & 0xfffffff4) | zx.d(*(zx.d(ebx) + &data_4ab990))
            
            data_4b1cac(result, var_14, var_10)
            return data_4b1ca4(arg1, result)

return result
