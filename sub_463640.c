// 函数: sub_463640
// 地址: 0x463640
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int64_t* var_c = nullptr
int64_t* var_10 = nullptr
int64_t* var_14 = nullptr
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0)
    sub_406a30(data_4ac150, &var_8)
    sub_406a30(data_4ac010, &var_c)
    sub_404e54(&var_8, var_c)
    int32_t edx_3
    edx_3.b = 1
    sub_40451c(sub_40ceb0(sub_407f68+0x68, edx_3, var_8))

if (arg2[1] == 0)
    sub_406a30(data_4ac150, &var_10)
    sub_406a30(data_4ac368, &var_14)
    sub_404e54(&var_10, var_14)
    int32_t edx_7
    edx_7.b = 1
    sub_40451c(sub_40ceb0(sub_407f68+0x68, edx_7, var_10))

int32_t eax_9 = sub_461b40(arg2[5])

if (eax_9 == 1)
    void* eax_10 = *(arg1 + 0x64)
    *(eax_10 + 8) = 0
    *(eax_10 + 0x10) = 0
else if (eax_9 != 2)
    void* eax_33 = arg2[6]
    
    if (eax_33 != 0)
        *(eax_33 + 0xc) = arg2[3]
        void* edx_30 = arg2[3]
        
        if (edx_30 != 0)
            *(edx_30 + 0x18) = eax_33
        
        int32_t eax_37 = sub_462098(arg2)
        sub_4620d4(arg2[6], eax_37)
        sub_461f1c(arg2[6])
    else
        *(arg2[5] + 8) = arg2[3]
        void* eax_35 = arg2[3]
        *(eax_35 + 0x18) = 0
        sub_461f1c(eax_35)
    
    void* var_30_5 = arg1
    void (__convention("regparm")* var_34_3)(void* arg1, void* arg2) = sub_463f50
    sub_462454(arg1, arg2[5])
else
    int32_t* eax_11 = arg2[6]
    int32_t* edi_1
    
    if (eax_11 != 0)
        edi_1 = eax_11
    else
        edi_1 = arg2[3]
    
    if (edi_1[1] != 0)
        void* eax_12 = arg2[5]
        
        if (*(arg1 + 0x64) != eax_12)
            *(eax_12 + 0x10) = 0
            *(eax_12 + 4) = edi_1[1]
            *(eax_12 + 8) = 0
            sub_403c68(edi_1)
        else
            *(*(arg1 + 0x64) + 8) = edi_1
            edi_1[6] = 0
            edi_1[3] = 0
            sub_4620c0(edi_1, sub_461bf8(*(arg1 + 0x64)))
            sub_461f1c(edi_1)
        
        void* var_30_3 = arg1
        void (__convention("regparm")* var_34_1)(void* arg1, void* arg2) = sub_463f50
        sub_462454(arg1, arg2[5])
    else if (arg2[5] != *(arg1 + 0x64))
        void* eax_26 = edi_1[2]
        
        if (eax_26 == 0)
            *(edi_1[5] + 8) = 0
            sub_403c68(edi_1)
        else
            *(eax_26 + 0x18) = *(arg2[5] + 0x18)
            
            if (*(edi_1[2] + 0x18) != 0)
                *(*(edi_1[2] + 0x18) + 0xc) = eax_26
            else
                *(*(arg2[5] + 0x14) + 8) = eax_26
            
            void* eax_27 = edi_1[2]
            *(eax_27 + 0x14) = *(arg2[5] + 0x14)
            
            while (*(eax_27 + 0xc) != 0)
                eax_27 = *(eax_27 + 0xc)
                *(eax_27 + 0x14) = *(arg2[5] + 0x14)
            
            *(eax_27 + 0xc) = *(arg2[5] + 0xc)
            
            if (*(eax_27 + 0xc) != 0)
                *(*(eax_27 + 0xc) + 0x18) = eax_27
            
            void* var_30_4 = arg1
            void (__convention("regparm")* var_34_2)(void* arg1, void* arg2) = sub_463f50
            sub_462454(arg1, *(eax_27 + 0x14))
            sub_403c68(arg2[5])
            sub_403c68(edi_1)
    else
        sub_4620d4(edi_1, *(arg1 + 0x68))
        *(arg1 + 0x68) = sub_462098(*(arg1 + 0x64))
        sub_403c68(*(arg1 + 0x64))
        *(arg1 + 0x64) = edi_1
        edi_1[3] = 0
        edi_1[6] = 0
        edi_1[5] = 0
        sub_463f28(arg1)

sub_403c68(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4638d8
return sub_404bac(&var_14, 4)
