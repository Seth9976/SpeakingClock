// 函数: sub_4a1a40
// 地址: 0x4a1a40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t var_c = 0
char* var_10 = nullptr
int64_t* var_14 = nullptr
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x368)
int32_t ecx = sub_4577d8(0, &var_8)
struct _EXCEPTION_REGISTRATION_RECORD* eax_2 = var_8

if (eax_2 != 0)
    eax_2 = *(eax_2 - 4)

if (eax_2 == 1)
    void* esi_1 = *(arg1 + 0x368)
    sub_4577d8(ecx, &var_14)
    sub_404ea0(&var_10, sub_4a1adf+5, var_14)
    ebp_1 = sub_457808(esi_1, var_10)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4a1ad5
sub_404b88(&ebp_1[-4])
sub_404b88(&ebp_1[-3])
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
