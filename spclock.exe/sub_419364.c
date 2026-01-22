// 函数: sub_419364
// 地址: 0x419364
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t* esp = &var_1c

if (arg2.b != 0)
    void var_2c
    esp = &var_2c
    arg1 = sub_403fcc(arg3, arg2)

void* var_10 = arg3
char var_9 = arg2.b
int32_t ecx
int32_t edx
ecx, edx = sub_403c38(arg3, 0)
edx.b = 1
*(arg1 + 4) = sub_403c38(ecx, edx)
sub_419250(data_4b19c8)
*(esp - 4) = &var_4
*(esp - 8) = j_sub_40443c
TEB* fsbase
*(esp - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp - 0xc

if (var_10 == 0)
    var_10 = *(data_4b19c8 + 0x20)

int32_t esi_2 = *(*(data_4b19c8 + 4) + 8) - 1

if (esi_2 s>= 0)
    int32_t i_2 = esi_2 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        void* eax_10 = sub_41a0f4(*(data_4b19c8 + 4), edi_1)
        
        if (sub_418d58(eax_10, var_10) != 0)
            sub_419f9c(*(arg1 + 4), eax_10)
        
        edi_1 += 1
        i = i_2
        i_2 -= 1
    while (i != 1)

if (arg4 != 0)
    int32_t esi_4 = *(*(data_4b19c8 + 4) + 8) - 1
    
    if (esi_4 s>= 0)
        int32_t i_3 = esi_4 + 1
        int32_t edi_2 = 0
        int32_t i_1
        
        do
            void* eax_19 = sub_41a0f4(*(data_4b19c8 + 4), edi_2)
            
            if (*(eax_19 + 0x10) != 0)
                sub_419f9c(*(arg1 + 4), eax_19)
            
            edi_2 += 1
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

*(esp - 4)
fsbase->NtTib.ExceptionList = *(esp - 0xc)
*(esp - 4) = sub_41946a
return sub_419308(data_4b19c8)
