#include "core_mcu.hpp"
#include <iostream>
// [TODO] : Implementasikan class core_mcu di file cpp ini
// [TIPS] : Gunakan CoreMCU::<nama methode> untuk mengimplementasikan methodenya

void Core_MCU::ganti_os(std::string new_os)
{
    os_name = new_os;
}

void Core_MCU::nambah_volt(int penambahan_voltase)
{
    volt_amount += penambahan_voltase;
}

std::string Core_MCU::get_os()
{
    return os_name;
}

void Core_MCU::showSpek()
{
    std::cout << "[SPEK DEVICE] : [NAMA DEVICE]: " << name << " | [CPU CLOCK] : " << cpu << " | [MEMORY] : " << mem << " | [OS] : " << os_name << "\n";
}

Core_MCU::Core_MCU(float cpu_speed, int memory, std::string os, std::string nama, int volt)
{
    cpu = cpu_speed;
    mem = memory;
    os_name = os;
    name = nama;
    volt_amount = volt;

    std::cout << "[CORE_MCU] : MCU utama yang bernama " << name << " telah dibuat\n";

    showSpek();
}

Core_MCU::~Core_MCU()
{
    std::cout << "[CORE_MCU] : MCU utama yang bernama " << name << " telah dihapus\n";
}