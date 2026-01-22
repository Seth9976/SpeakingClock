// 函数: sub_48578c
// 地址: 0x48578c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL bErase = 0xffffffff
void var_14
void* lpRect = &var_14
HWND ExceptionList = sub_45f888(arg1)

if (GetUpdateRect(ExceptionList, lpRect, bErase) != 0)
    (*(*arg1 + 0x44))()
    int32_t var_30
    int32_t var_2c
    int32_t var_28
    void var_24
    sub_406c1c(var_2c, var_30, var_2c - 3, &var_24, var_28)
    
    if (sub_406c58(&var_14, &var_14, &var_24) != 0)
        BOOL bErase_1 = 0xffffffff
        void* lpRect_1 = &var_24
        ExceptionList = sub_45f888(arg1)
        InvalidateRect(ExceptionList, lpRect_1, bErase_1)

if (data_4abce4 != 0)
    return (*(*arg1 + 0x80))()

data_4abce4 = 1
int32_t __saved_ebp
int32_t* var_44_1 = &__saved_ebp
int32_t (* var_48_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_45d738(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_44_2 = 0x485848
data_4abce4 = 0
return 0
