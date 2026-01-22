// 函数: sub_46270c
// 地址: 0x46270c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* var_8 = arg1
void* var_8_1 = arg2
arg2.b = 1
void* eax = sub_461b1c(&data_453d50, arg2, arg3)
*(eax + 0x10) = arg5

if (arg1 != 0)
    sub_4620c0(eax, sub_462098(arg1))
    *(eax + 0x14) = *(arg1 + 0x14)
    void* eax_26 = *(arg1 + 0x18)
    *(eax + 0x18) = eax_26
    
    if (eax_26 != 0)
        *(eax_26 + 0xc) = eax
    
    void* eax_27 = *(arg1 + 0xc)
    *(eax + 0xc) = eax_27
    
    if (eax_27 != 0)
        *(eax_27 + 0x18) = eax
    
    void* eax_28 = *(eax + 0x14)
    
    if (arg1 == *(eax_28 + 8))
        *(eax_28 + 8) = eax
    
    *(var_8_1 + 0x14) = eax
    *(arg1 + 0x14) = eax
    
    if (arg4 == 0)
        *(eax + 8) = var_8_1
        *(arg1 + 0x18) = var_8_1
        *(arg1 + 0xc) = 0
        *(var_8_1 + 0xc) = arg1
    else
        *(eax + 8) = arg1
        *(arg1 + 0x18) = 0
        *(arg1 + 0xc) = var_8_1
        *(var_8_1 + 0x18) = arg1
else
    sub_4620c0(eax, *(arg3 + 0x68))
    *(arg3 + 0x68) = sub_462098(*(arg3 + 0x64))
    *(arg3 + 0x48) = arg5
    *(arg3 + 0x40) = 0
    *(arg3 + 0x44) = 0x3fe00000
    
    if (arg4 == 0)
        *(eax + 8) = var_8_1
        void* eax_11 = *(arg3 + 0x64)
        *(eax_11 + 0x14) = eax
        *(eax_11 + 0x18) = var_8_1
        *(var_8_1 + 0xc) = eax_11
        *(var_8_1 + 0x14) = eax
        *(arg3 + 0x64) = eax
        void* var_18_2 = arg3
        void (__convention("regparm")* var_1c_2)(uint32_t arg1, uint32_t arg2) = sub_4639c8
        sub_462454(arg3, *(eax + 8))
        int32_t eax_15 = sub_462098(*(arg3 + 0x64))
        int32_t eax_16 = eax_15 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_15 s>> 1 s< 0)
            eax_16 = adc.d(eax_16, 0, c_1)
        
        *(arg3 + 0x4c) = eax_16
        void* var_18_3 = arg3
        void (__convention("regparm")* var_1c_3)(uint32_t arg1, uint32_t arg2) = sub_463e18
        sub_462454(arg3, *(eax + 8))
        int32_t eax_19 = sub_462098(*(arg3 + 0x64))
        int32_t edx_9 = eax_19 s>> 1
        bool c_2 = unimplemented  {sar edx, 0x1}
        
        if (eax_19 s>> 1 s< 0)
            edx_9 = adc.d(edx_9, 0, c_2)
        
        sub_4620c0(var_8_1, edx_9)
    else
        *(eax + 8) = *(arg3 + 0x64)
        void* eax_7 = *(arg3 + 0x64)
        *(eax_7 + 0x14) = eax
        *(eax_7 + 0xc) = var_8_1
        *(var_8_1 + 0x18) = eax_7
        *(var_8_1 + 0x14) = eax
        *(arg3 + 0x64) = eax
        void* var_18_1 = arg3
        void (__convention("regparm")* var_1c_1)(uint32_t arg1, uint32_t arg2) = sub_4639c8
        sub_462454(arg3, *(eax + 8))
    
    void* var_18_4 = arg3
    void (__convention("regparm")* var_1c_4)(void* arg1, void* arg2) = sub_463f50
    sub_462454(arg3, nullptr)

sub_461d7c(eax)
sub_462114(eax)
void* var_18_5 = arg3
void (__convention("regparm")* var_1c_5)(void* arg1, void* arg2) = sub_463f50
return sub_462454(arg3, nullptr)
