// 函数: sub_40d2c0
// 地址: 0x40d2c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_178 = ebx
int32_t esi
int32_t var_17c = esi
int32_t var_174 = 0
int32_t var_150 = 0
int32_t var_158 = 0
void* var_154 = nullptr
int32_t var_8 = 0
int32_t* var_180 = &var_4
int32_t (* var_184)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = *(arg1 - 4)

if (*(ebx_1 + 0x14) != 0)
    sub_406a30(data_4ac308, &var_8)
else
    sub_406a30(data_4ac4e4, &var_8)

int32_t esi_1 = *(ebx_1 + 0x18)
MEMORY_BASIC_INFORMATION buffer
VirtualQuery(*(ebx_1 + 0xc), &buffer, 0x1c)
void* ebp_1

if (buffer.State != 0x1000)
label_40d3f3:
    int32_t var_170 = *(ebx_1 + 0xc)
    char var_16c_1 = 5
    int32_t var_168_1 = var_8
    char var_164_1 = 0xb
    int32_t var_160_1 = esi_1
    char var_15c_1 = 5
    int32_t* var_18c_1 = &var_170
    sub_406a30(data_4ac314, &var_174)
    int32_t edx_7
    edx_7.b = 1
    int64_t** eax_16
    eax_16, ebp_1 = sub_40ceec(sub_407f68+0x71c, edx_7, var_174, 2)
else
    void filename
    
    if (GetModuleFileNameA(buffer.AllocationBase, &filename, 0x105) == 0)
        goto label_40d3f3
    
    int32_t var_14c = *(ebx_1 + 0xc)
    char var_148_1 = 5
    sub_404df8(&var_154, &filename, 0x105)
    sub_409b1c(var_154, &var_150)
    int32_t var_144_1 = var_150
    char var_140_1 = 0xb
    int32_t var_13c_1 = var_8
    char var_138_1 = 0xb
    int32_t var_134_1 = esi_1
    char var_130_1 = 5
    int32_t* var_18c = &var_14c
    sub_406a30(data_4ac398, &var_158)
    int32_t edx_5
    edx_5.b = 1
    int64_t** eax_12
    eax_12, ebp_1 = sub_40ceec(sub_407f68+0x71c, edx_5, var_158, 3)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_40d482
sub_404b88(ebp_1 - 0x170)
sub_404bac(ebp_1 - 0x154, 3)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
