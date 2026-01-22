// 函数: sub_4306bc
// 地址: 0x4306bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
int32_t ecx

if (arg2 != 0 && sub_403df4(arg2, 0x42a244) == 0)
    return sub_41a70c(ecx, arg2)
sub_430e88(var_8)
EnterCriticalSection(&data_4b1a64)
int32_t __saved_ebp
int32_t* var_68_1 = &__saved_ebp
int32_t (* var_6c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0)
    void var_5c
    sub_403578(&var_5c, 0x54, 0)
    int32_t var_78_1 = 0
    int32_t var_7c_1 = 0
    sub_4312bc(var_8, 0, 0, nullptr, 0, &var_5c)
    esp_1 = &var_8
else
    sub_42fb70(arg2[0xa])
    sub_42fb74(var_8->__offset(0x28).d)
    var_8->__offset(0x28).d = arg2[0xa]
    var_8->__offset(0x21).b = *(arg2 + 0x21)
    var_8->__offset(0x34).d = arg2[0xd]
    var_8->__offset(0x38).b = arg2[0xe].b

esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = 0x430785
esp_1[1] = &data_4b1a64
return LeaveCriticalSection()
