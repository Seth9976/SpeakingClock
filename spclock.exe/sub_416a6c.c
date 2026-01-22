// 函数: sub_416a6c
// 地址: 0x416a6c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t ebx = arg2[2]
uint32_t eax_3 = zx.d(*sub_416064(**arg2))
int32_t edx_1 = ebx & 0xff000000
int32_t result

if (edx_1 != 0xff000000)
    int32_t var_c_1
    
    if (edx_1 != 0xfe000000)
        var_c_1 = ebx
    else
        var_c_1 = *(*arg3 + sx.d(ebx.w))
    
    int32_t* var_8 = arg3
    int64_t var_20
    
    if (arg2[4] != 0x80000000)
        result = eax_3 & 0x7f
        
        switch (result)
            case 0
                float var_1c_3 = fconvert.s(arg4)
                return var_c_1()
            case 1
                return var_c_1(fconvert.d(arg4))
            case 2
                uint32_t var_1c_4 = zx.d(arg4:8.w)
                var_20.d = arg4:4.d
                return var_c_1(arg4.d, var_20)
            case 3
                return var_c_1(int.q(arg4))
            case 4
                return var_c_1(int.q(arg4 * fconvert.t(10000f)))
    else
        result = eax_3 & 0x7f
        
        switch (result)
            case 0
                float var_1c_1 = fconvert.s(arg4)
                return var_c_1()
            case 1
                return var_c_1(fconvert.d(arg4))
            case 2
                uint32_t var_1c_2 = zx.d(arg4:8.w)
                var_20.d = arg4:4.d
                return var_c_1(arg4.d, var_20)
            case 3
                return var_c_1(int.q(arg4))
            case 4
                return var_c_1(int.q(arg4 * fconvert.t(10000f)))
else
    int64_t* edx_4 = (ebx & 0xffffff) + arg3
    result = eax_3 & 0x7f
    
    switch (result)
        case 0
            *edx_4 = fconvert.s(arg4)
        case 1
            *edx_4 = fconvert.d(arg4)
        case 2
            *edx_4 = arg4.d
            *(edx_4 + 4) = arg4:4.d
            result.w = arg4:8.w
            edx_4[1].w = result.w
        case 3
            *edx_4 = int.q(arg4)
        case 4
            *edx_4 = int.q(arg4 * fconvert.t(10000f))

return result
