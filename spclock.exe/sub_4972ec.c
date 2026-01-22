// 函数: sub_4972ec
// 地址: 0x4972ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_110 = ebx
int32_t esi
int32_t var_114 = esi
int32_t edi
int32_t var_118 = edi
int64_t* var_c = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg3
void* ebx_1 = arg1
sub_405008(var_8)
int32_t* var_11c = &var_4
int32_t (* var_120)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != 0)
    if (var_8 == 0)
        char var_10c[0x100]
        sub_404dec(sub_403b48(*arg2, &var_10c), &var_10c)
        ebx_1, ebp_1 = sub_4971e4(ebx_1, var_c, &var_8)
    
    ebp_1[-1]
    (*(**(ebx_1 + 0x30) + 0x3c))()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_497380
return sub_404bac(&ebp_1[-2], 2)
