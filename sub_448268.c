// 函数: sub_448268
// 地址: 0x448268
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_7c = ebx
int32_t esi
int32_t var_80 = esi
int32_t edi
int32_t var_84 = edi
int32_t var_74 = 0
int32_t var_78 = 0
int32_t var_20 = 0
int32_t var_18 = 0
int32_t var_1c = 0
int64_t* var_14 = nullptr
int32_t var_8 = 0
void* var_c = nullptr
int32_t edx
int32_t var_10 = edx
int32_t* var_88 = &var_4
int32_t (* var_8c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_40530c(0x2d, 0x1b, &var_14)
sub_404ea0(&var_8, var_14, &data_44843c)
int32_t edi_2 = sub_423974(arg1) - 1

if (edi_2 s>= 0)
    int32_t i_1 = edi_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        if (sub_403df4(sub_423948(arg1, esi_1), 0x43730c) != 0)
            void* var_94_1 = var_c
            sub_4577d8(sub_423948(arg1, esi_1), &var_18)
            int32_t var_98_1 = var_18
            sub_40530c(0x20, 3, &var_1c)
            int32_t var_9c_1 = var_1c
            sub_404f1c(&var_c, 3)
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t var_94_2 = 1
void* ebp_1 = sub_40e28c(var_c, 0x44844c, nullptr, &var_20)
int32_t ecx_3 = sub_404c20(ebp_1 - 8, *(ebp_1 - 0x1c))
var_c = *(ebp_1 - 0xc)
*(ebp_1 - 0x6c) = *(ebp_1 - 4)
*(ebp_1 - 0x68) = 0xb
int32_t ecx_4 = sub_4577d8(ecx_3, ebp_1 - 0x70)
*(ebp_1 - 0x64) = *(ebp_1 - 0x70)
*(ebp_1 - 0x60) = 0xb
*(ebp_1 - 0x5c) = &data_44843c
*(ebp_1 - 0x58) = 0xb
*(ebp_1 - 0x54) = *(ebp_1 - 4)
*(ebp_1 - 0x50) = 0xb
*(arg1 + 0x360)
sub_4577d8(ecx_4, ebp_1 - 0x74)
*(ebp_1 - 0x4c) = *(ebp_1 - 0x74)
*(ebp_1 - 0x48) = 0xb
*(ebp_1 - 0x44) = &data_44843c
*(ebp_1 - 0x40) = 0xb
*(ebp_1 - 0x3c) = *(ebp_1 - 4)
*(ebp_1 - 0x38) = 0xb
*(ebp_1 - 0x34) = *(ebp_1 - 8)
*(ebp_1 - 0x30) = 0xb
*(ebp_1 - 0x2c) = &data_44843c
*(ebp_1 - 0x28) = 0xb
*(ebp_1 - 0x24) = *(ebp_1 - 4)
*(ebp_1 - 0x20) = 0xb
sub_40a37c(9, ebp_1 - 0x6c, "%s%s%s%s%s%s%s%s%s%s", var_c)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_44842a
sub_404bac(ebp_1 - 0x74, 2)
sub_404bac(ebp_1 - 0x1c, 2)
sub_404b88(ebp_1 - 0x14)
sub_404b88(ebp_1 - 0x10)
return sub_404bac(ebp_1 - 8, 2)
