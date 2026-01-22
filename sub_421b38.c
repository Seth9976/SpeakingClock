// 函数: sub_421b38
// 地址: 0x421b38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_4162ec(*(arg1 - 0x10), *(arg1 - 8))
void* edx_1 = sub_421940(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList

switch (zx.d(**(arg1 - 0xc)))
    case 1
        void* var_1c_1 = arg1
        ebp_1 = sub_421a28(***(arg1 - 8), eax_3, arg1)
        esp = &ExceptionList
    case 2
        *(arg1 - 4)
        sub_420754()
        esp = &var_8
    case 3
        ebp_1 = sub_416070(*(arg1 - 0xc), eax_3, &var_8)
        sub_420ef8(*(ebp_1[2] - 4), ebp_1[-1])
    case 6
        void* var_1c_2 = arg1
        ebp_1 = sub_421994(eax_3, edx_1)
        esp = &ExceptionList
    case 9
        ebp_1 = sub_4207a4(*(arg1 - 4))
        esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_421c29
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
