// 函数: sub_4643fc
// 地址: 0x4643fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_1c = 0
int32_t eax = *arg2
HCURSOR result

if (eax s> 0x204)
    if (eax == 0x205)
        int32_t eax_36 = sx.d(arg2[2].w)
        int32_t eax_37 = sx.d(*(arg2 + 0xa))
        int32_t eax_39
        int32_t edx_7
        eax_39, edx_7 = sub_46bd7c(arg2[1].w)
        edx_7.b = 1
        result = (*(*arg1 + 0x1c))(&var_1c, eax_37, eax_36)
    else if (eax == 0x206)
        int32_t eax_16 = sx.d(arg2[2].w)
        int32_t eax_17 = sx.d(*(arg2 + 0xa))
        char eax_19
        int32_t edx_3
        eax_19, edx_3 = sub_46bd7c(arg2[1].w)
        edx_3.b = 1
        result = (*(*arg1 + 0x14))(&var_1c, eax_17, eax_16)
    else if (eax == 0xb030)
        arg1[0xd]
        result = arg1[0xc]()
        
        if (arg2[3] == 0)
            result = (*(*arg1 + 0x34))(arg2[2] + 0x38)
        
        var_1c = 1
    else
        result = eax - 0xb042
        
        if (eax == 0xb042)
            result = arg2[2]
            
            if (result->unused == 0xb00b)
                result = sub_464374(arg1, arg2[1], result.b)
else if (eax == 0x204)
    int32_t eax_26 = sx.d(arg2[2].w)
    int32_t eax_27 = sx.d(*(arg2 + 0xa))
    int32_t eax_29
    int32_t edx_5
    eax_29, edx_5 = sub_46bd7c(arg2[1].w)
    edx_5.b = 1
    result = (*(*arg1 + 0x14))(&var_1c, eax_27, eax_26)
else if (eax s> 0x201)
    if (eax == 0x202)
        int32_t eax_31 = sx.d(arg2[2].w)
        int32_t eax_32 = sx.d(*(arg2 + 0xa))
        sub_46bd7c(arg2[1].w)
        result = (*(*arg1 + 0x1c))(&var_1c, eax_32, eax_31)
    else
        result = eax - 0x203
        
        if (eax == 0x203)
            int32_t eax_11 = sx.d(arg2[2].w)
            int32_t eax_12 = sx.d(*(arg2 + 0xa))
            sub_46bd7c(arg2[1].w)
            result = (*(*arg1 + 0x14))(&var_1c, eax_12, eax_11)
else if (eax == 0x201)
    int32_t eax_21 = sx.d(arg2[2].w)
    int32_t eax_22 = sx.d(*(arg2 + 0xa))
    sub_46bd7c(arg2[1].w)
    result = (*(*arg1 + 0x14))(&var_1c, eax_22, eax_21)
else if (eax == 0x20)
    int32_t point
    GetCursorPos(&point)
    int32_t point_1
    sub_457310(arg1[5], &point, &point_1)
    point = point_1
    HCURSOR result_2
    result = result_2
    HCURSOR result_1 = result
    
    if (arg2[2].w == 1)
        result = sub_45f888(arg1[5])
        
        if (result == arg2[1])
            result = sub_45e2d0(arg1[5])
            int32_t var_20
            
            if (result s> 0)
                result = sub_462bd0(arg1, &point, &var_20)
else
    result = eax - 0x200
    
    if (eax == 0x200)
        int32_t eax_7 = sx.d(*(arg2 + 0xa))
        sub_46bd7c(arg2[1].w)
        arg2[2].w
        result = (*(*arg1 + 0x18))(&var_1c, eax_7)

if (var_1c != 0 || *(arg1 + 0x32) == 0)
    return result

arg1[0xd]
return arg1[0xc]()
