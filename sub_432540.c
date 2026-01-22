// 函数: sub_432540
// 地址: 0x432540
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1[0xa]

if (*(ebx + 0xc) != 0)
    return 

int32_t ecx
int32_t edx

if (*(ebx + 8) == 0)
    ecx, edx = sub_42ca2c()

edx.b = 1
int32_t* eax_1 = sub_403c38(ecx, edx)
int32_t __saved_ebp
int32_t* var_20_1 = &__saved_ebp
int32_t (* var_24_1)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_43248c(arg1) != data_4b1a60)
    sub_42dadc(0, sub_43248c(arg1))
else
    void var_e
    sub_403578(&var_e, 6, 0)
    sub_41cad8(eax_1, &var_e, 6)

fsbase->NtTib.ExceptionList = ExceptionList
*(ebx + 0xc) = eax_1
