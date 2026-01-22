// 函数: sub_45486c
// 地址: 0x45486c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* var_2c = &__saved_ebp
int32_t (* var_30)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax = *arg2

if (eax s> 0x215)
    if (eax == 0xbd00)
        int32_t eax_16 = arg2[1]
        
        if (eax_16 == 0x11)
            sub_455348(data_4b1c68 + 0x10)
        else if (eax_16 == 0x1b)
            arg2[3] = 1
            sub_4559d8(nullptr)
    else if (eax == 0xbd01 && arg2[1] == 0x11)
        sub_455348(data_4b1c68 + 0x10)
else if (eax == 0x215)
    sub_4559d8(nullptr)
else if (eax == 0x200)
    int32_t eax_6 = arg2[2]
    int32_t point = sx.d(eax_6.w)
    int32_t var_c_1 = sx.d(eax_6:2.w)
    ClientToScreen(data_4b1c70, &point)
    sub_455348(&point)
else if (eax == 0x202)
    void* eax_2
    eax_2.b = 1
    sub_4559d8(eax_2)
else if (eax == 0x205)
    if (*(arg1 + 0x38) == 0)
        void* eax_13
        eax_13.b = 1
        sub_4559d8(eax_13)
    else
        sub_4559d8(nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
return 0
