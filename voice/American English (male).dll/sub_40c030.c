// 函数: sub_40c030
// 地址: 0x40c030
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ecx
int32_t var_8 = ecx
HMODULE eax
void* ecx_1
eax, ecx_1 = GetModuleHandleA("oleaut32.dll")
HMODULE var_8_1 = eax
data_4147a0 = sub_40c004("VariantChangeTypeEx", sub_40bba0, ecx_1)
int32_t __saved_ebp
data_4147a4 = sub_40c004("VarNeg", sub_40bbd0, &__saved_ebp)
data_4147a8 = sub_40c004("VarNot", sub_40bbd0, &__saved_ebp)
data_4147ac = sub_40c004("VarAdd", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147b0 = sub_40c004("VarSub", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147b4 = sub_40c004("VarMul", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147b8 = sub_40c004("VarDiv", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147bc = sub_40c004("VarIdiv", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147c0 = sub_40c004("VarMod", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147c4 = sub_40c004("VarAnd", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147c8 = sub_40c004("VarOr", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147cc = sub_40c004("VarXor", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterWinRTObject, 
    &__saved_ebp)
data_4147d0 = sub_40c004("VarCmp", 
    Microsoft::WRL::Module<1,class Platform::Details::InProcModule>::UnregisterCOMObject, 
    &__saved_ebp)
data_4147d4 = sub_40c004("VarI4FromStr", sub_40bbf4, &__saved_ebp)
data_4147d8 = sub_40c004("VarR4FromStr", sub_40bc60, &__saved_ebp)
data_4147dc = sub_40c004("VarR8FromStr", sub_40bccc, &__saved_ebp)
data_4147e0 = sub_40c004("VarDateFromStr", sub_40bd38, &__saved_ebp)
data_4147e4 = sub_40c004("VarCyFromStr", sub_40bda4, &__saved_ebp)
data_4147e8 = sub_40c004("VarBoolFromStr", sub_40be10, &__saved_ebp)
data_4147ec = sub_40c004("VarBstrFromCy", sub_40be90, &__saved_ebp)
data_4147f0 = sub_40c004("VarBstrFromDate", sub_40bf00, &__saved_ebp)
int32_t* var_c_21 = &__saved_ebp
int32_t result = sub_40c004("VarBstrFromBool", sub_40bf70, &__saved_ebp)
data_4147f4 = result
return result
