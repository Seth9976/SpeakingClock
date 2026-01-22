// 函数: sub_41adb4
// 地址: 0x41adb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* result = arg1[2]

if (*(result + 8) s<= 0)
    return result

(*(*arg1 + 0x20))()
int32_t __saved_ebp
int32_t* __saved_ebp_1 = &__saved_ebp
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
fsbase->NtTib.ExceptionList = &__saved_ebx

while (*0x8dc35d61 s> 0)
    sub_403c68(sub_41a1dc(0x8dc35d59))

fsbase->NtTib.ExceptionList = __saved_ebx_1
return (*0xfe962a0d)(&data_41ae15)
