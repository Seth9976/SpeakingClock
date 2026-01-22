// 函数: sub_47a65c
// 地址: 0x47a65c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi
int32_t var_40 = edi
int32_t ebx = arg5

if (*(arg3 + 4) == 0 || (*(**(arg3 + 4) + 0x2c))() == 0 || (*(**(arg3 + 4) + 0x20))() == 0)
    return 

bool var_15_1 = (ebx & 4) == 4

if (var_15_1 != 0)
    ebx.b &= 3

struct _EXCEPTION_REGISTRATION_RECORD* i = sub_47a088(arg3, ebx.b, edi)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList

if (sub_465ac4(sub_4659bc()) != 0)
    int32_t var_34 = *arg1
    int32_t edx_4 = arg1[1]
    int32_t var_2c_1 = divs.dp.d(sx.q((*(**(arg3 + 4) + 0x2c))()), zx.d(*(arg3 + 0x20))) + var_34
    int32_t var_28_1 = (*(**(arg3 + 4) + 0x20))() + edx_4
    char temp2_1 = ebx.b
    ebx.b -= 1
    
    if (temp2_1 == 1)
        ebx.b = 5
    else
        char temp3_1 = (ebx - 1).b
        ebx.b = (ebx - 1).b - 2
        
        if (temp3_1 u< 2)
            ebx.b = 4
        else
            ebx.b = 2
    
    sub_4659bc()
    void var_24
    sub_465d2c(&var_24, ebx)
    
    if (var_15_1 != 0)
        int32_t var_10
        int32_t eax_18 = sub_4330b0(2, &var_34, sub_42c73c(arg2), &var_10, 0)
        int32_t __saved_ebp
        int32_t* var_44_2 = &__saved_ebp
        int32_t (* var_48_2)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t eax_20 = sub_466cac(*(arg3 + 8))
        void* eax_21 = sub_4659bc()
        sub_465c14(&var_24, var_10, eax_21, i, eax_20, &var_34)
        int32_t ecx_3
        ecx_3.b = 0xff
        sub_4331a8(eax_18, &var_34, ecx_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_44_3 = 0x47a845
        sub_43313c(eax_18, 0xffffffff)
        return 
    
    int32_t* var_44_4 = &var_34
    int32_t eax_26 = sub_466cac(*(arg3 + 8))
    ExceptionList = i
    sub_465c14(&var_24, sub_42c73c(arg2), sub_4659bc(), ExceptionList, eax_26, var_44_4)
else if (arg4 != 0 || ebx.b == 3)
    enum IMAGE_LIST_DRAW_STYLE fStyle = ILD_TRANSPARENT
    COLORREF rgbFg = 0x1fffffff
    ExceptionList = 0x1fffffff
    int32_t y = arg1[1]
    int32_t x = *arg1
    HDC hdcDst = sub_42c73c(arg2)
    ImageList_DrawEx(sub_466cac(*(arg3 + 8)), i, hdcDst, x, y, 0, 0, ExceptionList, rgbFg, fStyle)
else
    enum IMAGE_LIST_DRAW_STYLE fStyle_1 = ILD_NORMAL
    COLORREF rgbFg_1 = 0x1fffffff
    ExceptionList = sub_42ad8c(0xff00000f)
    int32_t y_1 = arg1[1]
    int32_t x_1 = *arg1
    HDC hdcDst_1 = sub_42c73c(arg2)
    ImageList_DrawEx(sub_466cac(*(arg3 + 8)), i, hdcDst_1, x_1, y_1, 0, 0, ExceptionList, rgbFg_1, 
        fStyle_1)
