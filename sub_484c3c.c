// 函数: sub_484c3c
// 地址: 0x484c3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
int32_t var_c = 0
uint32_t var_10 = 0
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_409b54(arg2, &var_10)
sub_40dc4c(var_10, &var_8)
int32_t ecx
int32_t edx_2
ecx, edx_2 = sub_4050c0(&var_8, 1, 1)
void* i = data_4abc40
bool cond:0 = i == 0

while (i != 0)
    ecx, edx_2 = sub_404fb0(*(i + 4), var_8)
    
    if (cond:0)
        break
    
    i = *(i + 8)
    cond:0 = i == 0

if (i == 0)
    i = &data_4abc34

if (arg1[8] == 0)
    *i
    edx_2.b = 1
    arg1[8] = sub_403c38(ecx, edx_2)

int32_t* var_2c = &var_4
int32_t (* var_30)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp_1 = sub_41bd3c(arg1, arg2)
int32_t entry_ebx
fsbase->NtTib.ExceptionList = entry_ebx
fsbase->NtTib.ExceptionList = var_8
__return_addr = &data_484d2c
sub_404b88(ebp_1 - 0xc)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
