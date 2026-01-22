// 函数: sub_416954
// 地址: 0x416954
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx = arg2[1]
int32_t ecx_1 = edx & 0xff000000
uint32_t result
int32_t var_1c

if (ecx_1 != 0xff000000)
    int32_t var_10_1
    
    if (ecx_1 != 0xfe000000)
        var_10_1 = edx
    else
        var_10_1 = *(*arg1 + sx.d(edx.w))
    
    int32_t* var_c_1 = arg1
    
    if (arg2[4] != 0x80000000)
        var_10_1()
        var_1c.t = arg3
    else
        var_10_1()
        var_1c.t = arg3
    
    result = sub_416064(**arg2)
    
    if (*result == 4)
        var_1c.t = var_1c.t / fconvert.t(10000f)
else
    int64_t* esi_3 = (edx & 0xffffff) + arg1
    result = zx.d(*sub_416064(**arg2))
    
    if (result u> 4)
        result = 0
        int32_t var_1c_2 = 0
        int32_t var_18_2 = 0
        int16_t var_14_2 = 0
    else
        switch (result)
            case 0
                var_1c.t = fconvert.t(*esi_3)
            case 1
                var_1c.t = fconvert.t(*esi_3)
            case 2
                int32_t var_1c_1 = *esi_3
                uint32_t var_18_1 = *(esi_3 + 4)
                result.w = esi_3[1].w
                int16_t var_14_1 = result.w
            case 3
                var_1c.t = float.t(*esi_3)
            case 4
                var_1c.t = float.t(*esi_3) / fconvert.t(10000f)
unimplemented  {fld st0, tword [esp]}
return result
