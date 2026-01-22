// 函数: sub_46ed34
// 地址: 0x46ed34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t eax_1 = *arg2
HDC ExceptionList

if (eax_1 == 0xf)
    int32_t eax_29 = arg2[1]
    PAINTSTRUCT paint
    
    if (eax_29 == 0)
        arg2[1] = BeginPaint(arg1[0xa7], &paint)
    
    int32_t* var_7c_8 = &var_4
    int32_t (* var_80_5)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (eax_29 == 0)
        int32_t rect
        GetWindowRect(arg1[0xa7], &rect)
        int32_t rect_1
        sub_457310(arg1, &rect, &rect_1)
        rect = rect_1
        int32_t var_74
        sub_455ddc(arg2[1], neg.d(rect), neg.d(var_74))
    
    sub_45cfb8(arg1, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_7c_9 = 0x46ef10
    
    if (eax_29 != 0)
        return 0
    
    PAINTSTRUCT* lpPaint = &paint
    ExceptionList = arg1[0xa7]
    return EndPaint(ExceptionList, lpPaint)

int32_t* result

if (eax_1 == 0x14)
    int32_t eax_8
    eax_8, ebp_1 = sub_42bc04(arg1[0x69])
    (*(*ebp_1[-1] + 0x44))(eax_8)
    ExceptionList = *(ebp_1[-2] + 4)
    FillRect(ExceptionList, &ebp_1[-0x1b])
    
    if (*(ebp_1[-1] + 0x277) == 2 && *(ebp_1[-1] + 0x29c) != 0)
        GetClientRect(*(ebp_1[-1] + 0x29c), &ebp_1[-0x17])
        HBRUSH hbr
        hbr, ebp_1 = sub_42bc04(*(ebp_1[-1] + 0x1a4))
        ExceptionList = *(ebp_1[-2] + 4)
        FillRect(ExceptionList, &ebp_1[-0x17], hbr)
    
    result = ebp_1[-2]
    result[3] = 1
else if (eax_1 == 0x3f)
    sub_46eca8(&var_4)
    result = arg1
    
    if (*(result + 0x277) == 2)
        int32_t eax_24 = sub_46f644(arg1)
        char eax_25
        
        if (eax_24 != 0)
            eax_25 = sub_46ecf4(&var_4)
        
        char edx_1
        
        if (eax_24 == 0 || eax_25 == 0)
            edx_1 = 1
        else
            edx_1 = 0
        
        result = sub_46b8f0(arg1[0xa7], edx_1)
else if (eax_1 != 0x84)
    result = sub_46eca8(&var_4)
else
    sub_46eca8(&var_4)
    result = arg2
    
    if (result[3] == 1)
        result = arg2
        result[3] = 0xffffffff

*ebp_1
return result
