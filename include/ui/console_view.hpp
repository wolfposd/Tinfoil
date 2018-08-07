#pragma once

#include <switch.h>
#include "ui/view.hpp"

namespace tin::ui
{
    class ConsoleView : public View
    {
        protected:
            unsigned int m_unwindDistance = 1;

            virtual void OnPresented() override;
            virtual void ProcessInput(u64 keys) override;
            virtual void Update() override;
    
        public:
            ConsoleView(unsigned int unwindDistance = 1);
    };
}
