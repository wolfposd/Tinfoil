#include "ui/console_view.hpp"

namespace tin::ui
{
    ConsoleView::ConsoleView(unsigned int unwindDistance) :
        m_unwindDistance(unwindDistance)
    {

    }

    void ConsoleView::OnPresented()
    {
        consoleClear();
    }

    void ConsoleView::ProcessInput(u64 keys)
    {
        if (keys & KEY_B)
            m_viewManager->Unwind(m_unwindDistance);
    }
    
    void ConsoleView::Update() {}
};