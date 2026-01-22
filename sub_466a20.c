// 函数: sub_466a20
// 地址: 0x466a20
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx
edx.b = 1
int32_t ecx
arg1[0x13] = sub_403c38(ecx, edx)
int32_t eax_2 = arg1[0xc]

if (eax_2 s< 1 || eax_2 s> 0x8000 || arg1[0xd] s< 1)
    sub_406a30(data_4ac0dc, &var_8)
    int32_t edx_3
    edx_3.b = 1
    sub_40451c(sub_40ceb0(sub_417654+0x48, edx_3, var_8))

arg1[0xe] = 4
*(arg1 + 0x41) = 1
sub_467a30(arg1, 2)
*(arg1 + 0x43) = 0
arg1[0x11] = 0x1fffffff
arg1[0x12] = 0x1fffffff
int32_t edx_4
edx_4.b = 1
arg1[0x14] = sub_430618(sub_42a104+0x140, edx_4)
void* ebp_1 = sub_466aec(arg1)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_466ad4
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
