// 函数: sub_474ca8
// 地址: 0x474ca8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x8c) != 0)
    *(arg1 + 0x8e) |= 0x10
    return arg1

sub_474804(arg1)
int32_t __saved_ebp
int32_t* var_20 = &__saved_ebp
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD pvParam[0x2]
SystemParametersInfoA(SPI_GETWORKAREA, 0, &pvParam, 0)
void* ebp = sub_474c20(&pvParam)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_20_1 = 0x474d28
void* eax_4 = *(ebp - 4)
*(eax_4 + 0x8e) &= 0xffef
return sub_47480c(*(ebp - 4))
