// 函数: sub_418d9c
// 地址: 0x418d9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_114 = ebx
int32_t esi
int32_t var_118 = esi
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
void* esi_1 = arg2
void* ebx_1 = arg1
int32_t* var_11c = &var_4
int32_t (* var_120)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_108[0x100]
sub_404dec(sub_403b48(esi_1, &var_108), &var_108)
void* eax_2
int32_t ecx_1
eax_2, ecx_1 = sub_418cf0(ebx_1, var_8)
struct _EXCEPTION_REGISTRATION_RECORD* edx_2

if (eax_2 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD* var_110 = var_8
    char var_10c_1 = 0xb
    edx_2.b = 1
    int32_t eax_4
    eax_4, ebx_1, ebp_1, esi_1 = sub_40cfa8(sub_41715c+0x1b8, edx_2, data_4ac31c, 0, &var_110)
    esp = &ExceptionList
    ecx_1, edx_2 = sub_40451c(eax_4)

if (*(ebx_1 + 4) == 0)
    edx_2.b = 1
    esp = &var_8
    *(ebx_1 + 4) = sub_403c38(ecx_1, edx_2)

sub_419f9c(*(ebx_1 + 4), esi_1)
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_418e53
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
