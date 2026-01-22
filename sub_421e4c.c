// 函数: sub_421e4c
// 地址: 0x421e4c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList_1
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t eax_3
void* ecx
eax_3, ecx = sub_4162ec(*(arg1 - 0x10), *(arg1 - 8))

if (eax_3 != 0)
    if (sub_403df4(eax_3, &data_41780c) != 0)
        struct _EXCEPTION_REGISTRATION_RECORD* var_8
        
        if (sub_403df4(eax_3, &data_418674) == 0 || (*(eax_3 + 0x24) & 4) != 0)
            int32_t var_14 = *(*(arg1 - 4) + 0x20)
            int32_t ecx_4 = sub_404c20(&var_8, *(*(arg1 - 4) + 0x2c))
            int32_t* var_28_3 = &var_4
            int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            int32_t var_34 = *(*(arg1 - 4) + 0x2c)
            sub_404dec(ecx_4, *(arg1 - 8) + 0x1a)
            int32_t var_38 = var_18
            void* const var_3c = &data_42205c
            sub_404f1c(*(arg1 - 4) + 0x2c, 3)
            
            if (*(arg1 - 0x11) != 0)
                *(*(arg1 - 4) + 0x20) = sub_4162ec(*(*(arg1 - 4) + 0x20), *(arg1 - 8))
            
            void* ebp_2 = sub_4210e0(*(arg1 - 4), eax_3)
            fsbase->NtTib.ExceptionList = var_8
            __return_addr = &data_421fc8
            *(*(*(ebp_2 + 8) - 4) + 0x20) = *(ebp_2 - 0x10)
            return sub_404bdc(*(*(ebp_2 + 8) - 4) + 0x2c, *(ebp_2 - 4))
        
        void* var_28_2 = arg1
        int64_t* var_c
        ebp_1 = sub_421d24(eax_3, &var_c, ecx)
        esp = &var_8
        
        if (ebp_1[-2] != 0)
            var_c = ebp_1[2]
            sub_421940(var_c)
            esp = &var_8
            sub_420ef8(*(ebp_1[2] - 4), ebp_1[-2])
else
    sub_421940(arg1)
    esp = &ExceptionList_1
    *(arg1 - 4)
    sub_4229ec(arg1, 0xd)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_42204f
sub_404b88(&ebp_1[-5])
return sub_404bac(&ebp_1[-2], 2)
