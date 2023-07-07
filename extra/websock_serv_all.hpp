#pragma once

#include <array>
#include <span>
#include <vector>
#include <optional>
#include <algorithm>
#include <strstream>
#include <iostream>
#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <atomic>
#include <functional>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <list>
#include <vector>
#include <map>

/**
                  GNU LESSER GENERAL PUBLIC LICENSE
                       Version 2.1, February 1999

 Copyright (C) 1991, 1999 Free Software Foundation, Inc.
 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

[This is the first released version of the Lesser GPL.  It also counts
 as the successor of the GNU Library Public License, version 2, hence
 the version number 2.1.]

                            Preamble

  The licenses for most software are designed to take away your
freedom to share and change it.  By contrast, the GNU General Public
Licenses are intended to guarantee your freedom to share and change
free software--to make sure the software is free for all its users.

  This license, the Lesser General Public License, applies to some
specially designated software packages--typically libraries--of the
Free Software Foundation and other authors who decide to use it.  You
can use it too, but we suggest you first think carefully about whether
this license or the ordinary General Public License is the better
strategy to use in any particular case, based on the explanations below.

  When we speak of free software, we are referring to freedom of use,
not price.  Our General Public Licenses are designed to make sure that
you have the freedom to distribute copies of free software (and charge
for this service if you wish); that you receive source code or can get
it if you want it; that you can change the software and use pieces of
it in new free programs; and that you are informed that you can do
these things.

  To protect your rights, we need to make restrictions that forbid
distributors to deny you these rights or to ask you to surrender these
rights.  These restrictions translate to certain responsibilities for
you if you distribute copies of the library or if you modify it.

  For example, if you distribute copies of the library, whether gratis
or for a fee, you must give the recipients all the rights that we gave
you.  You must make sure that they, too, receive or can get the source
code.  If you link other code with the library, you must provide
complete object files to the recipients, so that they can relink them
with the library after making changes to the library and recompiling
it.  And you must show them these terms so they know their rights.

  We protect your rights with a two-step method: (1) we copyright the
library, and (2) we offer you this license, which gives you legal
permission to copy, distribute and/or modify the library.

  To protect each distributor, we want to make it very clear that
there is no warranty for the free library.  Also, if the library is
modified by someone else and passed on, the recipients should know
that what they have is not the original version, so that the original
author's reputation will not be affected by problems that might be
introduced by others.

  Finally, software patents pose a constant threat to the existence of
any free program.  We wish to make sure that a company cannot
effectively restrict the users of a free program by obtaining a
restrictive license from a patent holder.  Therefore, we insist that
any patent license obtained for a version of the library must be
consistent with the full freedom of use specified in this license.

  Most GNU software, including some libraries, is covered by the
ordinary GNU General Public License.  This license, the GNU Lesser
General Public License, applies to certain designated libraries, and
is quite different from the ordinary General Public License.  We use
this license for certain libraries in order to permit linking those
libraries into non-free programs.

  When a program is linked with a library, whether statically or using
a shared library, the combination of the two is legally speaking a
combined work, a derivative of the original library.  The ordinary
General Public License therefore permits such linking only if the
entire combination fits its criteria of freedom.  The Lesser General
Public License permits more lax criteria for linking other code with
the library.

  We call this license the "Lesser" General Public License because it
does Less to protect the user's freedom than the ordinary General
Public License.  It also provides other free software developers Less
of an advantage over competing non-free programs.  These disadvantages
are the reason we use the ordinary General Public License for many
libraries.  However, the Lesser license provides advantages in certain
special circumstances.

  For example, on rare occasions, there may be a special need to
encourage the widest possible use of a certain library, so that it becomes
a de-facto standard.  To achieve this, non-free programs must be
allowed to use the library.  A more frequent case is that a free
library does the same job as widely used non-free libraries.  In this
case, there is little to gain by limiting the free library to free
software only, so we use the Lesser General Public License.

  In other cases, permission to use a particular library in non-free
programs enables a greater number of people to use a large body of
free software.  For example, permission to use the GNU C Library in
non-free programs enables many more people to use the whole GNU
operating system, as well as its variant, the GNU/Linux operating
system.

  Although the Lesser General Public License is Less protective of the
users' freedom, it does ensure that the user of a program that is
linked with the Library has the freedom and the wherewithal to run
that program using a modified version of the Library.

  The precise terms and conditions for copying, distribution and
modification follow.  Pay close attention to the difference between a
"work based on the library" and a "work that uses the library".  The
former contains code derived from the library, whereas the latter must
be combined with the library in order to run.

                  GNU LESSER GENERAL PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. This License Agreement applies to any software library or other
program which contains a notice placed by the copyright holder or
other authorized party saying it may be distributed under the terms of
this Lesser General Public License (also called "this License").
Each licensee is addressed as "you".

  A "library" means a collection of software functions and/or data
prepared so as to be conveniently linked with application programs
(which use some of those functions and data) to form executables.

  The "Library", below, refers to any such software library or work
which has been distributed under these terms.  A "work based on the
Library" means either the Library or any derivative work under
copyright law: that is to say, a work containing the Library or a
portion of it, either verbatim or with modifications and/or translated
straightforwardly into another language.  (Hereinafter, translation is
included without limitation in the term "modification".)

  "Source code" for a work means the preferred form of the work for
making modifications to it.  For a library, complete source code means
all the source code for all modules it contains, plus any associated
interface definition files, plus the scripts used to control compilation
and installation of the library.

  Activities other than copying, distribution and modification are not
covered by this License; they are outside its scope.  The act of
running a program using the Library is not restricted, and output from
such a program is covered only if its contents constitute a work based
on the Library (independent of the use of the Library in a tool for
writing it).  Whether that is true depends on what the Library does
and what the program that uses the Library does.

  1. You may copy and distribute verbatim copies of the Library's
complete source code as you receive it, in any medium, provided that
you conspicuously and appropriately publish on each copy an
appropriate copyright notice and disclaimer of warranty; keep intact
all the notices that refer to this License and to the absence of any
warranty; and distribute a copy of this License along with the
Library.

  You may charge a fee for the physical act of transferring a copy,
and you may at your option offer warranty protection in exchange for a
fee.

  2. You may modify your copy or copies of the Library or any portion
of it, thus forming a work based on the Library, and copy and
distribute such modifications or work under the terms of Section 1
above, provided that you also meet all of these conditions:

    a) The modified work must itself be a software library.

    b) You must cause the files modified to carry prominent notices
    stating that you changed the files and the date of any change.

    c) You must cause the whole of the work to be licensed at no
    charge to all third parties under the terms of this License.

    d) If a facility in the modified Library refers to a function or a
    table of data to be supplied by an application program that uses
    the facility, other than as an argument passed when the facility
    is invoked, then you must make a good faith effort to ensure that,
    in the event an application does not supply such function or
    table, the facility still operates, and performs whatever part of
    its purpose remains meaningful.

    (For example, a function in a library to compute square roots has
    a purpose that is entirely well-defined independent of the
    application.  Therefore, Subsection 2d requires that any
    application-supplied function or table used by this function must
    be optional: if the application does not supply it, the square
    root function must still compute square roots.)

These requirements apply to the modified work as a whole.  If
identifiable sections of that work are not derived from the Library,
and can be reasonably considered independent and separate works in
themselves, then this License, and its terms, do not apply to those
sections when you distribute them as separate works.  But when you
distribute the same sections as part of a whole which is a work based
on the Library, the distribution of the whole must be on the terms of
this License, whose permissions for other licensees extend to the
entire whole, and thus to each and every part regardless of who wrote
it.

Thus, it is not the intent of this section to claim rights or contest
your rights to work written entirely by you; rather, the intent is to
exercise the right to control the distribution of derivative or
collective works based on the Library.

In addition, mere aggregation of another work not based on the Library
with the Library (or with a work based on the Library) on a volume of
a storage or distribution medium does not bring the other work under
the scope of this License.

  3. You may opt to apply the terms of the ordinary GNU General Public
License instead of this License to a given copy of the Library.  To do
this, you must alter all the notices that refer to this License, so
that they refer to the ordinary GNU General Public License, version 2,
instead of to this License.  (If a newer version than version 2 of the
ordinary GNU General Public License has appeared, then you can specify
that version instead if you wish.)  Do not make any other change in
these notices.

  Once this change is made in a given copy, it is irreversible for
that copy, so the ordinary GNU General Public License applies to all
subsequent copies and derivative works made from that copy.

  This option is useful when you wish to copy part of the code of
the Library into a program that is not a library.

  4. You may copy and distribute the Library (or a portion or
derivative of it, under Section 2) in object code or executable form
under the terms of Sections 1 and 2 above provided that you accompany
it with the complete corresponding machine-readable source code, which
must be distributed under the terms of Sections 1 and 2 above on a
medium customarily used for software interchange.

  If distribution of object code is made by offering access to copy
from a designated place, then offering equivalent access to copy the
source code from the same place satisfies the requirement to
distribute the source code, even though third parties are not
compelled to copy the source along with the object code.

  5. A program that contains no derivative of any portion of the
Library, but is designed to work with the Library by being compiled or
linked with it, is called a "work that uses the Library".  Such a
work, in isolation, is not a derivative work of the Library, and
therefore falls outside the scope of this License.

  However, linking a "work that uses the Library" with the Library
creates an executable that is a derivative of the Library (because it
contains portions of the Library), rather than a "work that uses the
library".  The executable is therefore covered by this License.
Section 6 states terms for distribution of such executables.

  When a "work that uses the Library" uses material from a header file
that is part of the Library, the object code for the work may be a
derivative work of the Library even though the source code is not.
Whether this is true is especially significant if the work can be
linked without the Library, or if the work is itself a library.  The
threshold for this to be true is not precisely defined by law.

  If such an object file uses only numerical parameters, data
structure layouts and accessors, and small macros and small inline
functions (ten lines or less in length), then the use of the object
file is unrestricted, regardless of whether it is legally a derivative
work.  (Executables containing this object code plus portions of the
Library will still fall under Section 6.)

  Otherwise, if the work is a derivative of the Library, you may
distribute the object code for the work under the terms of Section 6.
Any executables containing that work also fall under Section 6,
whether or not they are linked directly with the Library itself.

  6. As an exception to the Sections above, you may also combine or
link a "work that uses the Library" with the Library to produce a
work containing portions of the Library, and distribute that work
under terms of your choice, provided that the terms permit
modification of the work for the customer's own use and reverse
engineering for debugging such modifications.

  You must give prominent notice with each copy of the work that the
Library is used in it and that the Library and its use are covered by
this License.  You must supply a copy of this License.  If the work
during execution displays copyright notices, you must include the
copyright notice for the Library among them, as well as a reference
directing the user to the copy of this License.  Also, you must do one
of these things:

    a) Accompany the work with the complete corresponding
    machine-readable source code for the Library including whatever
    changes were used in the work (which must be distributed under
    Sections 1 and 2 above); and, if the work is an executable linked
    with the Library, with the complete machine-readable "work that
    uses the Library", as object code and/or source code, so that the
    user can modify the Library and then relink to produce a modified
    executable containing the modified Library.  (It is understood
    that the user who changes the contents of definitions files in the
    Library will not necessarily be able to recompile the application
    to use the modified definitions.)

    b) Use a suitable shared library mechanism for linking with the
    Library.  A suitable mechanism is one that (1) uses at run time a
    copy of the library already present on the user's computer system,
    rather than copying library functions into the executable, and (2)
    will operate properly with a modified version of the library, if
    the user installs one, as long as the modified version is
    interface-compatible with the version that the work was made with.

    c) Accompany the work with a written offer, valid for at
    least three years, to give the same user the materials
    specified in Subsection 6a, above, for a charge no more
    than the cost of performing this distribution.

    d) If distribution of the work is made by offering access to copy
    from a designated place, offer equivalent access to copy the above
    specified materials from the same place.

    e) Verify that the user has already received a copy of these
    materials or that you have already sent this user a copy.

  For an executable, the required form of the "work that uses the
Library" must include any data and utility programs needed for
reproducing the executable from it.  However, as a special exception,
the materials to be distributed need not include anything that is
normally distributed (in either source or binary form) with the major
components (compiler, kernel, and so on) of the operating system on
which the executable runs, unless that component itself accompanies
the executable.

  It may happen that this requirement contradicts the license
restrictions of other proprietary libraries that do not normally
accompany the operating system.  Such a contradiction means you cannot
use both them and the Library together in an executable that you
distribute.

  7. You may place library facilities that are a work based on the
Library side-by-side in a single library together with other library
facilities not covered by this License, and distribute such a combined
library, provided that the separate distribution of the work based on
the Library and of the other library facilities is otherwise
permitted, and provided that you do these two things:

    a) Accompany the combined library with a copy of the same work
    based on the Library, uncombined with any other library
    facilities.  This must be distributed under the terms of the
    Sections above.

    b) Give prominent notice with the combined library of the fact
    that part of it is a work based on the Library, and explaining
    where to find the accompanying uncombined form of the same work.

  8. You may not copy, modify, sublicense, link with, or distribute
the Library except as expressly provided under this License.  Any
attempt otherwise to copy, modify, sublicense, link with, or
distribute the Library is void, and will automatically terminate your
rights under this License.  However, parties who have received copies,
or rights, from you under this License will not have their licenses
terminated so long as such parties remain in full compliance.

  9. You are not required to accept this License, since you have not
signed it.  However, nothing else grants you permission to modify or
distribute the Library or its derivative works.  These actions are
prohibited by law if you do not accept this License.  Therefore, by
modifying or distributing the Library (or any work based on the
Library), you indicate your acceptance of this License to do so, and
all its terms and conditions for copying, distributing or modifying
the Library or works based on it.

  10. Each time you redistribute the Library (or any work based on the
Library), the recipient automatically receives a license from the
original licensor to copy, distribute, link with or modify the Library
subject to these terms and conditions.  You may not impose any further
restrictions on the recipients' exercise of the rights granted herein.
You are not responsible for enforcing compliance by third parties with
this License.

  11. If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot
distribute so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you
may not distribute the Library at all.  For example, if a patent
license would not permit royalty-free redistribution of the Library by
all those who receive copies directly or indirectly through you, then
the only way you could satisfy both it and this License would be to
refrain entirely from distribution of the Library.

If any portion of this section is held invalid or unenforceable under any
particular circumstance, the balance of the section is intended to apply,
and the section as a whole is intended to apply in other circumstances.

It is not the purpose of this section to induce you to infringe any
patents or other property right claims or to contest validity of any
such claims; this section has the sole purpose of protecting the
integrity of the free software distribution system which is
implemented by public license practices.  Many people have made
generous contributions to the wide range of software distributed
through that system in reliance on consistent application of that
system; it is up to the author/donor to decide if he or she is willing
to distribute software through any other system and a licensee cannot
impose that choice.

This section is intended to make thoroughly clear what is believed to
be a consequence of the rest of this License.

  12. If the distribution and/or use of the Library is restricted in
certain countries either by patents or by copyrighted interfaces, the
original copyright holder who places the Library under this License may add
an explicit geographical distribution limitation excluding those countries,
so that distribution is permitted only in or among countries not thus
excluded.  In such case, this License incorporates the limitation as if
written in the body of this License.

  13. The Free Software Foundation may publish revised and/or new
versions of the Lesser General Public License from time to time.
Such new versions will be similar in spirit to the present version,
but may differ in detail to address new problems or concerns.

Each version is given a distinguishing version number.  If the Library
specifies a version number of this License which applies to it and
"any later version", you have the option of following the terms and
conditions either of that version or of any later version published by
the Free Software Foundation.  If the Library does not specify a
license version number, you may choose any version ever published by
the Free Software Foundation.

  14. If you wish to incorporate parts of the Library into other free
programs whose distribution conditions are incompatible with these,
write to the author to ask for permission.  For software which is
copyrighted by the Free Software Foundation, write to the Free
Software Foundation; we sometimes make exceptions for this.  Our
decision will be guided by the two goals of preserving the free status
of all derivatives of our free software and of promoting the sharing
and reuse of software generally.

                            NO WARRANTY

  15. BECAUSE THE LIBRARY IS LICENSED FREE OF CHARGE, THERE IS NO
WARRANTY FOR THE LIBRARY, TO THE EXTENT PERMITTED BY APPLICABLE LAW.
EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR
OTHER PARTIES PROVIDE THE LIBRARY "AS IS" WITHOUT WARRANTY OF ANY
KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE
LIBRARY IS WITH YOU.  SHOULD THE LIBRARY PROVE DEFECTIVE, YOU ASSUME
THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.

  16. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN
WRITING WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY
AND/OR REDISTRIBUTE THE LIBRARY AS PERMITTED ABOVE, BE LIABLE TO YOU
FOR DAMAGES, INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE
LIBRARY (INCLUDING BUT NOT LIMITED TO LOSS OF DATA OR DATA BEING
RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD PARTIES OR A
FAILURE OF THE LIBRARY TO OPERATE WITH ANY OTHER SOFTWARE), EVEN IF
SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
DAMAGES.

                     END OF TERMS AND CONDITIONS

           How to Apply These Terms to Your New Libraries

  If you develop a new library, and you want it to be of the greatest
possible use to the public, we recommend making it free software that
everyone can redistribute and change.  You can do so by permitting
redistribution under these terms (or, alternatively, under the terms of the
ordinary General Public License).

  To apply these terms, attach the following notices to the library.  It is
safest to attach them to the start of each source file to most effectively
convey the exclusion of warranty; and each file should have at least the
"copyright" line and a pointer to where the full notice is found.

    <one line to give the library's name and a brief idea of what it does.>
    Copyright (C) <year>  <name of author>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
    USA

Also add information on how to contact you by electronic and paper mail.

You should also get your employer (if you work as a programmer) or your
school, if any, to sign a "copyright disclaimer" for the library, if
necessary.  Here is a sample; alter the names:

  Yoyodyne, Inc., hereby disclaims all copyright interest in the
  library `Frob' (a library for tweaking knobs) written by James Random
  Hacker.

  <signature of Ty Coon>, 1 April 1990
  Ty Coon, President of Vice

That's all there is to it!
*/
namespace wolv {

    namespace unsigned_integers {

        using u8  = std::uint8_t;
        using u16 = std::uint16_t;
        using u32 = std::uint32_t;
        using u64 = std::uint64_t;
        using u128 = __uint128_t;

    }

    namespace signed_integers {

        using i8  = std::int8_t;
        using i16 = std::int16_t;
        using i32 = std::int32_t;
        using i64 = std::int64_t;
        using i128 = __int128_t;

    }

    namespace floating_point_numbers {

        using f32 = float;
        using f64 = double;

    }

    using namespace unsigned_integers;
    using namespace signed_integers;
    using namespace floating_point_numbers;

}

#define WOLV_TOKEN_CONCAT_IMPL(x, y)    x##y
#define WOLV_TOKEN_CONCAT(x, y)         WOLV_TOKEN_CONCAT_IMPL(x, y)
#define WOLV_ANONYMOUS_VARIABLE(prefix) WOLV_TOKEN_CONCAT(prefix, __COUNTER__)

namespace wolv::util {

    namespace scope_guard {

#define SCOPE_GUARD   ::wolv::util::scope_guard::ScopeGuardOnExit() + [&]()
#define ON_SCOPE_EXIT [[maybe_unused]] auto WOLV_ANONYMOUS_VARIABLE(SCOPE_EXIT_) = SCOPE_GUARD

        template<class F>
        class ScopeGuard {
        private:
            F m_func;
            bool m_active;

        public:
            explicit constexpr ScopeGuard(F func) : m_func(std::move(func)), m_active(true) { }
            ~ScopeGuard() {
                if (this->m_active) { this->m_func(); }
            }

            void release() { this->m_active = false; }

            ScopeGuard(ScopeGuard &&other) noexcept : m_func(std::move(other.m_func)), m_active(other.m_active) {
                other.cancel();
            }

            ScopeGuard &operator=(ScopeGuard &&) = delete;
        };

        enum class ScopeGuardOnExit { };

        template<typename F>
        constexpr ScopeGuard<F> operator+(ScopeGuardOnExit, F &&f) {
            return ScopeGuard<F>(std::forward<F>(f));
        }

    }

    namespace first_time_exec {

#define AT_FIRST_TIME [[maybe_unused]] static auto WOLV_ANONYMOUS_VARIABLE(FIRST_TIME_) = ::wolv::util::first_time_exec::FirstTimeExecutor() + [&]()

        template<class F>
        class FirstTimeExecute {
        public:
            explicit constexpr FirstTimeExecute(F func) { func(); }

            FirstTimeExecute &operator=(FirstTimeExecute &&) = delete;
        };

        enum class FirstTimeExecutor { };

        template<typename F>
        constexpr FirstTimeExecute<F> operator+(FirstTimeExecutor, F &&f) {
            return FirstTimeExecute<F>(std::forward<F>(f));
        }

    }

    namespace final_cleanup {

#define AT_FINAL_CLEANUP [[maybe_unused]] static auto WOLV_ANONYMOUS_VARIABLE(ON_EXIT_) = ::wolv::util::final_cleanup::FinalCleanupExecutor() + [&]()

        template<class F>
        class FinalCleanupExecute {
            F m_func;

        public:
            explicit constexpr FinalCleanupExecute(F func) : m_func(func) { }
            constexpr ~FinalCleanupExecute() { this->m_func(); }

            FinalCleanupExecute &operator=(FinalCleanupExecute &&) = delete;
        };

        enum class FinalCleanupExecutor { };

        template<typename F>
        constexpr FinalCleanupExecute<F> operator+(FinalCleanupExecutor, F &&f) {
            return FinalCleanupExecute<F>(std::forward<F>(f));
        }

    }

    class ThreadPool {
    public:
        using Task = std::function<void(const std::atomic<bool> &)>;

        explicit ThreadPool(size_t threadCount) {
            for (size_t i = 0; i < threadCount; i += 1) {
                this->m_threads.emplace_back([this]{
                    this->waitForTasks();
                });
            }
        }

        ~ThreadPool() {
            this->stop();
        }

        ThreadPool(const ThreadPool &) = delete;
        ThreadPool(ThreadPool &&other) noexcept {
            if (this != &other) {
                other.stop();
                for (size_t i = 0; i < other.m_threads.size(); i += 1) {
                    this->m_threads.emplace_back([this]{
                        this->waitForTasks();
                    });
                }
                other.m_threads.clear();

                this->m_tasks = std::move(other.m_tasks);
            }
        }

        ThreadPool& operator=(const ThreadPool &) = delete;
        ThreadPool& operator=(ThreadPool &&other) noexcept {
            if (this != &other) {
                other.stop();
                for (size_t i = 0; i < other.m_threads.size(); i += 1) {
                    this->m_threads.emplace_back([this]{
                        this->waitForTasks();
                    });
                }
                other.m_threads.clear();

                this->m_tasks = std::move(other.m_tasks);
            }

            return *this;
        }

        void enqueue(Task &&task) {
            {
                std::unique_lock lock(this->m_mutex);
                this->m_tasks.emplace_back(task);
            }

            this->m_condition.notify_one();
        }

        void stop() {
            {
                std::unique_lock lock(this->m_mutex);
                this->m_stop = true;
            }

            this->m_condition.notify_all();

            for (auto &thread : this->m_threads)
                thread.detach();
        }

    private:
        void waitForTasks() {
            while (true) {
                Task task;
                {
                    std::unique_lock lock(this->m_mutex);
                    this->m_condition.wait(lock, [this] {
                        return this->m_stop || !this->m_tasks.empty();
                    });

                    if (this->m_stop && this->m_tasks.empty())
                        return;

                    task = std::move(this->m_tasks.front());
                    this->m_tasks.pop_front();
                }

                task(this->m_stop);
            }
        }

    private:
        std::vector<std::thread> m_threads;
        std::list<Task> m_tasks;

        std::mutex m_mutex;
        std::condition_variable m_condition;
        std::atomic<bool> m_stop = false;
    };

    std::vector<std::string> splitString(const std::string &string, const std::string &delimiter) {
        size_t start = 0, end = 0;
        std::string token;
        std::vector<std::string> res;

        while ((end = string.find(delimiter, start)) != std::string::npos) {
            size_t size = end - start;
            if (start + size > string.length())
                break;

            token = string.substr(start, end - start);
            start = end + delimiter.length();
            res.push_back(token);
        }

        res.emplace_back(string.substr(start));
        return res;
    }

    std::string combineStrings(const std::vector<std::string> &strings, const std::string &delimiter) {
        std::string result;
        for (const auto &string : strings) {
            result += string;
            result += delimiter;
        }

        return result.substr(0, result.length() - delimiter.length());
    }

    std::string replaceStrings(std::string string, const std::string &search, const std::string &replace) {
        if (search.empty())
            return string;

        std::size_t pos;
        while ((pos = string.find(search)) != std::string::npos)
            string.replace(pos, search.size(), replace);

        return string;
    }

    template<typename T>
    concept Char8StringConvertable = requires(T t) { t.u8string(); };

    std::string toUTF8String(const Char8StringConvertable auto &value) {
        auto result = value.u8string();

        return { result.begin(), result.end() };
    }

    constexpr inline size_t strnlen(const char *s, size_t n) {
        size_t i = 0;

        while (i < n && s[i] != '\x00') i++;

        return i;
    }

    template<typename T = char>
    [[nodiscard]] std::basic_string<T> trim(std::basic_string<T> s) {
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](u8 ch) {
            return !std::isspace(ch) && ch >= 0x20;
        }));
        s.erase(std::find_if(s.rbegin(), s.rend(), [](u8 ch) {
            return !std::isspace(ch) && ch >= 0x20;
        }).base(), s.end());

        return s;
    }

    template<typename T = char>
    [[nodiscard]] std::basic_string_view<T> trim(std::basic_string_view<T> s) {
        while (!s.empty() && std::isspace(s.front())) s.remove_prefix(1);
        while (!s.empty() && std::isspace(s.back())) s.remove_suffix(1);

        return s;
    }

}

#if defined(OS_WINDOWS)

#include <winsock2.h>
    #include <ws2tcpip.h>
    #include <windows.h>

#else

#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>

#endif

namespace wolv::net {

#if defined(OS_WINDOWS)
    using SocketHandle = SOCKET;
        constexpr SocketHandle SocketNone = INVALID_SOCKET;
#else
    using SocketHandle = int;
    constexpr SocketHandle SocketNone = -1;
#endif

    void closeSocket(SocketHandle socket) {
#if defined(OS_WINDOWS)
        ::closesocket(socket);
#else
        ::close(socket);
#endif
    }

    void initializeSockets() {
#if defined(OS_WINDOWS)
        static bool initialized = false;

            if (initialized)
                return;

            AT_FIRST_TIME {
                WSAData wsa = { };
                WSAStartup(MAKEWORD(2, 2), &wsa);
                initialized = true;
            };

            AT_FINAL_CLEANUP {
                WSACleanup();
                initialized = false;
            };
#endif
    }

    class SocketServer {

    public:

        SocketServer() = default;

        using ReadCallback = std::function<std::vector<u8>(SocketHandle, const std::vector<u8>)>;
        using CloseCallback = std::function<void(SocketHandle)>;

        SocketServer(u16 port, size_t bufferSize, i32 maxClientCount, bool localOnly)
                : m_bufferSize(bufferSize), m_maxClientCount(maxClientCount), m_threadPool(maxClientCount),
                  m_localOnly(localOnly) {
            initializeSockets();

            this->m_socket = ::socket(AF_INET, SOCK_STREAM, 0);
            if (this->m_socket == SocketNone)
                return;

            const int reuse = true;
#if defined (OS_WINDOWS)
            setsockopt(this->m_socket, SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<const char *>(&reuse), sizeof(reuse));
                setsockopt(this->m_socket, SOL_SOCKET, SO_EXCLUSIVEADDRUSE, reinterpret_cast<const char *>(&reuse), sizeof(reuse));
#else
#ifdef SO_REUSEPORT
            setsockopt(this->m_socket, SOL_SOCKET, SO_REUSEPORT, reinterpret_cast<const void *>(&reuse), sizeof(reuse));
#else
            setsockopt(this->m_socket, SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<const void *>(&reuse), sizeof(reuse));
#endif
#endif

            auto guard = SCOPE_GUARD{
                    closeSocket(this->m_socket);
                    this->m_socket = SocketNone;
            };

            struct sockaddr_in serverAddr = {};
            std::memset(&serverAddr, 0, sizeof(serverAddr));
            serverAddr.sin_family = AF_INET;
            serverAddr.sin_addr.s_addr = htonl(this->m_localOnly ? INADDR_LOOPBACK : INADDR_ANY);
            serverAddr.sin_port = htons(port);

            int bindResult = ::bind(this->m_socket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));
            if (bindResult < 0) {
                this->m_error = bindResult;
                return;
            }

            int listenResult = ::listen(this->m_socket, this->m_maxClientCount);
            if (listenResult < 0) {
                this->m_error = listenResult;
                return;
            }

            guard.release();
        }

        SocketHandle acceptConnection(SocketHandle serverSocket) {
            struct sockaddr_in clientAddr = {};
            socklen_t clientSize = sizeof(clientAddr);
            return ::accept(serverSocket, (struct sockaddr *) &clientAddr, &clientSize);
        }

        void setSocketTimeout(SocketHandle socket, u32 milliseconds) {
#if defined(OS_WINDOWS)
            DWORD timeout = milliseconds;
                setsockopt(socket, SOL_SOCKET, SO_RCVTIMEO, reinterpret_cast<char*>(&timeout), sizeof(timeout));
#else
            struct timeval timeout = {0, int(milliseconds * 1000U)};
            setsockopt(socket, SOL_SOCKET, SO_RCVTIMEO, reinterpret_cast<char *>(&timeout), sizeof(timeout));
#endif
        }

        void send(SocketHandle socket, const std::vector<u8> &data) const {
            ::send(socket, reinterpret_cast<const char *>(data.data()), data.size(), 0);
        }

        void send(SocketHandle socket, const std::string &data) const {
            ::send(socket, data.c_str(), data.size(), 0);
        }

        void close(wolv::net::SocketHandle socket) const {
            closeSocket(socket);
        }

        void handleClient(SocketHandle clientSocket, bool keepAlive, const std::atomic<bool> &shouldStop,
                                        const ReadCallback &callback) {
            std::vector<u8> buffer(m_bufferSize);
            std::vector<u8> data;

            while (!shouldStop) {
                setSocketTimeout(clientSocket, 100);

                bool reuse = true;
                setsockopt(clientSocket, SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<char *>(&reuse), sizeof(reuse));

                int len = ::recv(clientSocket, reinterpret_cast<char *>(buffer.data()), buffer.size(), 0);
                if (len > 0) {
                    std::copy(buffer.begin(), buffer.begin() + len, std::back_inserter(data));
                    continue;
                }

                if (!data.empty()) {

                    // callback with the data
                    std::vector<u8> result = callback(clientSocket, data);
                    if (!result.empty())
                        ::send(clientSocket, reinterpret_cast<const char *>(result.data()), result.size(), 0);

                    // clear the data
                    data.clear();

                    // if we're not keeping the connection alive, break
                    if (!keepAlive)
                        break;

                }

                // check if the client is still connected
                if (len < 0 && errno == EAGAIN)
                    continue;

                // if the client is not connected, break
                close(clientSocket);
                closeSocket(clientSocket);
                break;
            }
        }

        void accept(const ReadCallback &callback, const CloseCallback &closeCallback, bool keepAlive) {
            auto clientSocket = acceptConnection(this->m_socket);
            if (clientSocket == SocketNone) {
                return;
            }

            this->m_threadPool.enqueue(
                    [this, clientSocket, callback, closeCallback, keepAlive](const auto &shouldStop) {
                        this->handleClient(clientSocket, keepAlive, shouldStop, callback);
                        if (closeCallback)
                            closeCallback(clientSocket);
                        closeSocket(clientSocket);
                    });
        }

        std::optional<int> getError() const {
            return this->m_error;
        }

        bool isListening() const {
            return !this->m_error.has_value();
        }

        bool isActive() const {
            return this->m_socket != SocketNone;
        }

        void shutdown() {
            this->m_threadPool.stop();
            closeSocket(this->m_socket);
            this->m_socket = SocketNone;
        }

    private:
        size_t m_bufferSize = 1024;
        i32 m_maxClientCount = 5;
        bool m_localOnly = true;

        SocketHandle m_socket = SocketNone;
        util::ThreadPool m_threadPool = util::ThreadPool(0);
        std::optional<int> m_error;

    };

}

/**
MIT License

Copyright (c) 2022 - Matheus Gomes

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

NOTE: This is a modified version of the original code, which can be found here:
https://github.com/matheusgomes28/base64pp/blob/main/base64pp/base64pp.cpp
 */

namespace base64 {

    namespace
    {
        std::array<char, 64> constexpr encode_table{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                                                    'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                                                    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5',
                                                    '6', '7', '8', '9', '+', '/'};

        std::array<std::uint8_t, 256> constexpr decode_table{0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x3E, 0x64, 0x64,
                                                             0x64, 0x3F, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10,
                                                             0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x1A, 0x1B, 0x1C,
                                                             0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E,
                                                             0x2F, 0x30, 0x31, 0x32, 0x33, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64,
                                                             0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64, 0x64};

        std::array<char, 4> encode_tripplet(std::uint8_t a, std::uint8_t b, std::uint8_t c)
        {
            std::uint32_t const concat_bits = (a << 16) | (b << 8) | c;

            auto const b64_char1 = encode_table[(concat_bits >> 18) & 0b0011'1111];
            auto const b64_char2 = encode_table[(concat_bits >> 12) & 0b0011'1111];
            auto const b64_char3 = encode_table[(concat_bits >> 6) & 0b0011'1111];
            auto const b64_char4 = encode_table[concat_bits & 0b0011'1111];
            return {b64_char1, b64_char2, b64_char3, b64_char4};
        }

        inline bool is_valid_base64_char(char c)
        {
            auto const decode_byte = decode_table[c];
            return decode_byte != 0x64;
        }

        inline bool is_valid_base64_str(std::string_view const encoded_str)
        {
            if ((encoded_str.size() % 4) == 1)
            {
                return false;
            }

            if (!std::all_of(begin(encoded_str), end(encoded_str) - 2, [](char c) { return is_valid_base64_char(c); }))
            {
                return false;
            }

            auto const last = rbegin(encoded_str);
            if (!is_valid_base64_char(*next(last)))
            {
                return (*next(last) == '=') && (*last == '=');
            }

            return is_valid_base64_char(*last) || (*last == '=');
        }

        std::array<std::uint8_t, 3> decode_quad(char a, char b, char c, char d)
        {
            std::uint32_t const concat_bytes =
                    (decode_table[a] << 18) | (decode_table[b] << 12) | (decode_table[c] << 6) | decode_table[d];

            std::uint8_t const byte1 = (concat_bytes >> 16) & 0b1111'1111;
            std::uint8_t const byte2 = (concat_bytes >> 8) & 0b1111'1111;
            std::uint8_t const byte3 = concat_bytes & 0b1111'1111;
            return {byte1, byte2, byte3};
        }
    } // namespace

    std::string encode(std::span<std::uint8_t const> const input)
    {
        auto const size          = input.size();
        auto const full_tripples = size / 3;

        std::string output;
        output.reserve((full_tripples + 2) * 4);

        for (std::size_t i = 0; i < full_tripples; ++i)
        {
            auto const tripplet     = input.subspan(i * 3, 3);
            auto const base64_chars = encode_tripplet(tripplet[0], tripplet[1], tripplet[2]);
            std::copy(begin(base64_chars), end(base64_chars), back_inserter(output));
        }

        if (auto const remaining_chars = size - full_tripples * 3; remaining_chars == 2)
        {
            auto const last_two     = input.last(2);
            auto const base64_chars = encode_tripplet(last_two[0], last_two[1], 0x00);

            output.push_back(base64_chars[0]);
            output.push_back(base64_chars[1]);
            output.push_back(base64_chars[2]);
            output.push_back('=');
        }
        else if (remaining_chars == 1)
        {
            auto const base64_chars = encode_tripplet(input.back(), 0x00, 0x00);

            output.push_back(base64_chars[0]);
            output.push_back(base64_chars[1]);
            output.push_back('=');
            output.push_back('=');
        }

        return output;
    }

    std::string encode_str(std::string_view input)
    {
        return encode({reinterpret_cast<std::uint8_t const*>(input.data()), input.size()});
    }

    std::optional<std::vector<std::uint8_t>> decode(std::string_view const encoded_str)
    {
        if (encoded_str.size() == 0)
        {
            return std::vector<std::uint8_t>{};
        }

        if (!is_valid_base64_str(encoded_str))
        {
            return std::nullopt;
        }

        auto const unpadded_encoded_str = encoded_str.substr(0, encoded_str.find_first_of('='));
        auto const full_quadruples      = unpadded_encoded_str.size() / 4;

        std::vector<std::uint8_t> decoded_bytes;
        decoded_bytes.reserve(((full_quadruples + 2) * 3) / 4);

        for (std::size_t i = 0; i < full_quadruples; ++i)
        {
            auto const quad  = unpadded_encoded_str.substr(i * 4, 4);
            auto const bytes = decode_quad(quad[0], quad[1], quad[2], quad[3]);
            std::copy(begin(bytes), end(bytes), back_inserter(decoded_bytes));
        }

        if (auto const last_quad = unpadded_encoded_str.substr(full_quadruples * 4); last_quad.size() == 0)
        {
            return decoded_bytes;
        }
        else if ((last_quad.size() == 2) || (last_quad[2] == '='))
        {
            auto const bytes = decode_quad(last_quad[0], last_quad[1], 'A', 'A');
            decoded_bytes.push_back(bytes[0]);
        }
        else
        {
            auto const bytes = decode_quad(last_quad[0], last_quad[1], last_quad[2], 'A');
            std::copy_n(begin(bytes), 2, back_inserter(decoded_bytes));
        }

        return decoded_bytes;
    }
}

class SHA1
{
public:
    SHA1();
    void update(const std::string &s);
    void update(std::istream &is);
    std::string final();
    std::array<uint8_t, 20> final_bytes();
    static std::string from_file(const std::string &filename);

private:
    uint32_t digest[5];
    std::string buffer;
    uint64_t transforms;
};


static const size_t BLOCK_INTS = 16;  /* number of 32bit integers per SHA1 block */
static const size_t BLOCK_BYTES = BLOCK_INTS * 4;


inline static void reset(uint32_t digest[], std::string &buffer, uint64_t &transforms)
{
    /* SHA1 initialization constants */
    digest[0] = 0x67452301;
    digest[1] = 0xefcdab89;
    digest[2] = 0x98badcfe;
    digest[3] = 0x10325476;
    digest[4] = 0xc3d2e1f0;

    /* Reset counters */
    buffer = "";
    transforms = 0;
}


inline static uint32_t rol(const uint32_t value, const size_t bits)
{
    return (value << bits) | (value >> (32 - bits));
}


inline static uint32_t blk(const uint32_t block[BLOCK_INTS], const size_t i)
{
    return rol(block[(i+13)&15] ^ block[(i+8)&15] ^ block[(i+2)&15] ^ block[i], 1);
}


/*
 * (R0+R1), R2, R3, R4 are the different operations used in SHA1
 */

inline static void R0(const uint32_t block[BLOCK_INTS], const uint32_t v, uint32_t &w, const uint32_t x, const uint32_t y, uint32_t &z, const size_t i)
{
    z += ((w&(x^y))^y) + block[i] + 0x5a827999 + rol(v, 5);
    w = rol(w, 30);
}


inline static void R1(uint32_t block[BLOCK_INTS], const uint32_t v, uint32_t &w, const uint32_t x, const uint32_t y, uint32_t &z, const size_t i)
{
    block[i] = blk(block, i);
    z += ((w&(x^y))^y) + block[i] + 0x5a827999 + rol(v, 5);
    w = rol(w, 30);
}


inline static void R2(uint32_t block[BLOCK_INTS], const uint32_t v, uint32_t &w, const uint32_t x, const uint32_t y, uint32_t &z, const size_t i)
{
    block[i] = blk(block, i);
    z += (w^x^y) + block[i] + 0x6ed9eba1 + rol(v, 5);
    w = rol(w, 30);
}


inline static void R3(uint32_t block[BLOCK_INTS], const uint32_t v, uint32_t &w, const uint32_t x, const uint32_t y, uint32_t &z, const size_t i)
{
    block[i] = blk(block, i);
    z += (((w|x)&y)|(w&x)) + block[i] + 0x8f1bbcdc + rol(v, 5);
    w = rol(w, 30);
}


inline static void R4(uint32_t block[BLOCK_INTS], const uint32_t v, uint32_t &w, const uint32_t x, const uint32_t y, uint32_t &z, const size_t i)
{
    block[i] = blk(block, i);
    z += (w^x^y) + block[i] + 0xca62c1d6 + rol(v, 5);
    w = rol(w, 30);
}


/*
 * Hash a single 512-bit block. This is the core of the algorithm.
 */

inline static void transform(uint32_t digest[], uint32_t block[BLOCK_INTS], uint64_t &transforms)
{
    /* Copy digest[] to working vars */
    uint32_t a = digest[0];
    uint32_t b = digest[1];
    uint32_t c = digest[2];
    uint32_t d = digest[3];
    uint32_t e = digest[4];

    /* 4 rounds of 20 operations each. Loop unrolled. */
    R0(block, a, b, c, d, e,  0);
    R0(block, e, a, b, c, d,  1);
    R0(block, d, e, a, b, c,  2);
    R0(block, c, d, e, a, b,  3);
    R0(block, b, c, d, e, a,  4);
    R0(block, a, b, c, d, e,  5);
    R0(block, e, a, b, c, d,  6);
    R0(block, d, e, a, b, c,  7);
    R0(block, c, d, e, a, b,  8);
    R0(block, b, c, d, e, a,  9);
    R0(block, a, b, c, d, e, 10);
    R0(block, e, a, b, c, d, 11);
    R0(block, d, e, a, b, c, 12);
    R0(block, c, d, e, a, b, 13);
    R0(block, b, c, d, e, a, 14);
    R0(block, a, b, c, d, e, 15);
    R1(block, e, a, b, c, d,  0);
    R1(block, d, e, a, b, c,  1);
    R1(block, c, d, e, a, b,  2);
    R1(block, b, c, d, e, a,  3);
    R2(block, a, b, c, d, e,  4);
    R2(block, e, a, b, c, d,  5);
    R2(block, d, e, a, b, c,  6);
    R2(block, c, d, e, a, b,  7);
    R2(block, b, c, d, e, a,  8);
    R2(block, a, b, c, d, e,  9);
    R2(block, e, a, b, c, d, 10);
    R2(block, d, e, a, b, c, 11);
    R2(block, c, d, e, a, b, 12);
    R2(block, b, c, d, e, a, 13);
    R2(block, a, b, c, d, e, 14);
    R2(block, e, a, b, c, d, 15);
    R2(block, d, e, a, b, c,  0);
    R2(block, c, d, e, a, b,  1);
    R2(block, b, c, d, e, a,  2);
    R2(block, a, b, c, d, e,  3);
    R2(block, e, a, b, c, d,  4);
    R2(block, d, e, a, b, c,  5);
    R2(block, c, d, e, a, b,  6);
    R2(block, b, c, d, e, a,  7);
    R3(block, a, b, c, d, e,  8);
    R3(block, e, a, b, c, d,  9);
    R3(block, d, e, a, b, c, 10);
    R3(block, c, d, e, a, b, 11);
    R3(block, b, c, d, e, a, 12);
    R3(block, a, b, c, d, e, 13);
    R3(block, e, a, b, c, d, 14);
    R3(block, d, e, a, b, c, 15);
    R3(block, c, d, e, a, b,  0);
    R3(block, b, c, d, e, a,  1);
    R3(block, a, b, c, d, e,  2);
    R3(block, e, a, b, c, d,  3);
    R3(block, d, e, a, b, c,  4);
    R3(block, c, d, e, a, b,  5);
    R3(block, b, c, d, e, a,  6);
    R3(block, a, b, c, d, e,  7);
    R3(block, e, a, b, c, d,  8);
    R3(block, d, e, a, b, c,  9);
    R3(block, c, d, e, a, b, 10);
    R3(block, b, c, d, e, a, 11);
    R4(block, a, b, c, d, e, 12);
    R4(block, e, a, b, c, d, 13);
    R4(block, d, e, a, b, c, 14);
    R4(block, c, d, e, a, b, 15);
    R4(block, b, c, d, e, a,  0);
    R4(block, a, b, c, d, e,  1);
    R4(block, e, a, b, c, d,  2);
    R4(block, d, e, a, b, c,  3);
    R4(block, c, d, e, a, b,  4);
    R4(block, b, c, d, e, a,  5);
    R4(block, a, b, c, d, e,  6);
    R4(block, e, a, b, c, d,  7);
    R4(block, d, e, a, b, c,  8);
    R4(block, c, d, e, a, b,  9);
    R4(block, b, c, d, e, a, 10);
    R4(block, a, b, c, d, e, 11);
    R4(block, e, a, b, c, d, 12);
    R4(block, d, e, a, b, c, 13);
    R4(block, c, d, e, a, b, 14);
    R4(block, b, c, d, e, a, 15);

    /* Add the working vars back into digest[] */
    digest[0] += a;
    digest[1] += b;
    digest[2] += c;
    digest[3] += d;
    digest[4] += e;

    /* Count the number of transformations */
    transforms++;
}


inline static void buffer_to_block(const std::string &buffer, uint32_t block[BLOCK_INTS])
{
    /* Convert the std::string (byte buffer) to a uint32_t array (MSB) */
    for (size_t i = 0; i < BLOCK_INTS; i++)
    {
        block[i] = (buffer[4*i+3] & 0xff)
                   | (buffer[4*i+2] & 0xff)<<8
                   | (buffer[4*i+1] & 0xff)<<16
                   | (buffer[4*i+0] & 0xff)<<24;
    }
}


inline SHA1::SHA1()
{
    reset(digest, buffer, transforms);
}


inline void SHA1::update(const std::string &s)
{
    std::istringstream is(s);
    update(is);
}


inline void SHA1::update(std::istream &is)
{
    while (true)
    {
        char sbuf[BLOCK_BYTES];
        is.read(sbuf, BLOCK_BYTES - buffer.size());
        buffer.append(sbuf, (std::size_t)is.gcount());
        if (buffer.size() != BLOCK_BYTES)
        {
            return;
        }
        uint32_t block[BLOCK_INTS];
        buffer_to_block(buffer, block);
        transform(digest, block, transforms);
        buffer.clear();
    }
}


/*
 * Add padding and return the message digest.
 */

inline std::array<uint8_t, 20> SHA1::final_bytes() {
    /* Total number of hashed bits */
    uint64_t total_bits = (transforms*BLOCK_BYTES + buffer.size()) * 8;

    /* Padding */
    buffer += (char)0x80;
    size_t orig_size = buffer.size();
    while (buffer.size() < BLOCK_BYTES)
    {
        buffer += (char)0x00;
    }

    uint32_t block[BLOCK_INTS];
    buffer_to_block(buffer, block);

    if (orig_size > BLOCK_BYTES - 8)
    {
        transform(digest, block, transforms);
        for (size_t i = 0; i < BLOCK_INTS - 2; i++)
        {
            block[i] = 0;
        }
    }

    /* Append total_bits, split this uint64_t into two uint32_t */
    block[BLOCK_INTS - 1] = (uint32_t)total_bits;
    block[BLOCK_INTS - 2] = (uint32_t)(total_bits >> 32);
    transform(digest, block, transforms);

    std::array<uint8_t, 20> result{};
    for (size_t i = 0; i < 5; i++)
    {
        result[i*4 + 0] = (digest[i] >> 24) & 0xff;
        result[i*4 + 1] = (digest[i] >> 16) & 0xff;
        result[i*4 + 2] = (digest[i] >> 8) & 0xff;
        result[i*4 + 3] = (digest[i] >> 0) & 0xff;
    }

    return result;
}

inline std::string SHA1::final()
{
    /* Total number of hashed bits */
    uint64_t total_bits = (transforms*BLOCK_BYTES + buffer.size()) * 8;

    /* Padding */
    buffer += (char)0x80;
    size_t orig_size = buffer.size();
    while (buffer.size() < BLOCK_BYTES)
    {
        buffer += (char)0x00;
    }

    uint32_t block[BLOCK_INTS];
    buffer_to_block(buffer, block);

    if (orig_size > BLOCK_BYTES - 8)
    {
        transform(digest, block, transforms);
        for (size_t i = 0; i < BLOCK_INTS - 2; i++)
        {
            block[i] = 0;
        }
    }

    /* Append total_bits, split this uint64_t into two uint32_t */
    block[BLOCK_INTS - 1] = (uint32_t)total_bits;
    block[BLOCK_INTS - 2] = (uint32_t)(total_bits >> 32);
    transform(digest, block, transforms);

    /* Hex std::string */
    std::ostringstream result;
    for (size_t i = 0; i < sizeof(digest) / sizeof(digest[0]); i++)
    {
        result << std::hex << std::setfill('0') << std::setw(8);
        result << digest[i];
    }

    /* Reset for next run */
    reset(digest, buffer, transforms);

    return result.str();
}


inline std::string SHA1::from_file(const std::string &filename)
{
    std::ifstream stream(filename.c_str(), std::ios::binary);
    SHA1 checksum;
    checksum.update(stream);
    return checksum.final();
}

namespace websock::util {

    struct http_request {
        std::string method;
        std::string path;
        std::string version;
        std::map<std::string, std::string> headers;
        std::string body;
    };

    http_request parseHttpRequest(const std::string& request) {
        http_request req;
        auto lines = wolv::util::splitString(request, "\r\n");
        auto httpLine = wolv::util::splitString(lines[0], " ");
        req.method = httpLine[0];
        req.path = httpLine[1];
        req.version = httpLine[2];
        for (int i = 1; i < lines.size(); i++) {
            if(lines[i].empty()) break;
            auto header = wolv::util::splitString(lines[i], ": ");
            req.headers[header[0]] = header[1];
        }
        req.body = lines[lines.size() - 1];
        return req;
    }

    std::vector<unsigned char> datarize(const std::string& str) {
        return {str.begin(), str.end()};
    }
}

namespace websock {

    using namespace wolv;

    enum opcode : u8 {
        CONTINUATION = 0x0,
        TEXT = 0x1,
        BINARY = 0x2,
        CLOSE = 0x8,
        PING = 0x9,
        PONG = 0xA
    };

    struct frame {
        struct header {
            bool fin : 1;
            bool rsv1 : 1;
            bool rsv2 : 1;
            bool rsv3 : 1;
            opcode op : 4;
        } header{};
        bool masked{false};
        u64 payloadLength{0};
        u8 maskingKey[4]{};
        std::vector<u8> payload{};
    };

    frame decodeFrame(const std::vector<u8>& data) {
        u8 firstByte = data[0];
        struct frame::header header = reinterpret_cast<struct frame::header&>(firstByte);
        header.op = static_cast<opcode>(firstByte & 0b00001111);
        frame f;
        f.header = header;
        f.masked = (data[1] & 0b10000000) != 0;
        f.payloadLength = data[1] & 0b01111111;
        size_t offset = 2;
        if (f.payloadLength == 126) {
            f.payloadLength = (data[2] << 8) | data[3];
            offset += 2;
        } else if (f.payloadLength == 127) {
            f.payloadLength = ((u64) data[2] << 56) | ((u64) data[3] << 48) | ((u64) data[4] << 40) | ((u64) data[5] << 32)
                              | ((u64) data[6] << 24) | ((u64) data[7] << 16) | ((u64) data[8] << 8) | data[9];
            offset += 8;
        }
        if (f.masked) {
            f.maskingKey[0] = data[offset];
            f.maskingKey[1] = data[offset + 1];
            f.maskingKey[2] = data[offset + 2];
            f.maskingKey[3] = data[offset + 3];
            offset += 4;
        }
        f.payload = std::vector<u8>(data.begin() + offset, data.begin() + offset + f.payloadLength);
        // unmask payload
        if (f.masked) {
            for (size_t i = 0; i < f.payloadLength; i++) {
                f.payload[i] ^= f.maskingKey[i % 4];
            }
        }
        return f;
    }
    std::vector<u8> encodeFrame(const frame& f) {
        std::vector<u8> out;
        u8 firstByte = f.header.fin << 7 | f.header.rsv1 << 6 | f.header.rsv2 << 5 | f.header.rsv3 << 4 | f.header.op;
        out.push_back(firstByte);
        u8 secondByte = f.masked << 7;
        if(f.payloadLength > 65535) {
            secondByte |= 127;
            out.push_back(secondByte);
            out.push_back((f.payloadLength >> 56) & 0xFF);
            out.push_back((f.payloadLength >> 48) & 0xFF);
            out.push_back((f.payloadLength >> 40) & 0xFF);
            out.push_back((f.payloadLength >> 32) & 0xFF);
            out.push_back((f.payloadLength >> 24) & 0xFF);
            out.push_back((f.payloadLength >> 16) & 0xFF);
            out.push_back((f.payloadLength >> 8) & 0xFF);
            out.push_back(f.payloadLength & 0xFF);
        } else if(f.payloadLength > 125) {
            secondByte |= 126;
            out.push_back(secondByte);
            out.push_back((f.payloadLength >> 8) & 0xFF);
            out.push_back(f.payloadLength & 0xFF);
        } else {
            secondByte |= f.payloadLength;
            out.push_back(secondByte);
        }
        if(f.masked) {
            out.push_back(f.maskingKey[0]);
            out.push_back(f.maskingKey[1]);
            out.push_back(f.maskingKey[2]);
            out.push_back(f.maskingKey[3]);
        }
        // mask payload
        if(f.masked) {
            for(size_t i = 0; i < f.payloadLength; i++) {
                out.push_back(f.payload[i] ^ f.maskingKey[i % 4]);
            }
        } else {
            out.insert(out.end(), f.payload.begin(), f.payload.end());
        }
        return out;
    }

    frame createStringFrame(std::string str, opcode op=opcode::TEXT) {
        frame f;
        f.header.fin = true;
        f.header.op = op;

        f.masked = false;
        f.payloadLength = str.length();
        f.payload = std::vector<u8>(str.begin(), str.end());
        return f;
    }

    frame createBinaryFrame(const std::vector<u8>& data, opcode op=opcode::BINARY) {
        frame f;
        f.header.fin = true;
        f.header.op = op;

        f.masked = false;
        f.payloadLength = data.size();
        f.payload = data;
        return f;
    }

}

namespace websock::http {

    using u8 = wolv::u8;

    /**
     * @brief A simple websocket server
     */
    class server : public wolv::net::SocketServer {
    public:

        /**
         * @brief A client connected to the server
         */
        class client {
        public:

            client() = default;
            client(server* parent, wolv::net::SocketHandle socket) : m_parent(parent), m_socket(socket) {}

            /**
             * @brief Send data to the client
             * @param data The data to send
             */
            void send(const std::string& data) {
                frame f = createStringFrame(data);
                auto encoded = encodeFrame(f);
                this->m_parent->send(this->m_socket, encoded);
            }

            /**
             * @brief Send data to the client
             * @param data The data to send
             */
            void send(const std::vector<u8>& data) {
                frame f = createBinaryFrame(data);
                auto encoded = encodeFrame(f);
                this->m_parent->send(this->m_socket, encoded);
            }

            /**
             * Send a ping to the client
             * @param callback The callback to call when the client responds with a pong
             */
            void ping(const std::function<void()>& callback = nullptr) {
                frame f;
                f.header.fin = true;
                f.header.op = PING;
                auto encoded = encodeFrame(f);
                this->m_parent->pingCallbacks[this->m_socket] = callback;
                this->m_parent->send(this->m_socket, encoded);
            }

            /**
             * @brief Disconnect the client
             * @param reason The reason for disconnecting
             */
            void disconnect(const std::string& reason = "Closing connection") {
                frame f = this->m_parent->prepareCloseFrame(reason);
                auto encoded = encodeFrame(f);
                this->m_parent->send(this->m_socket, encoded);
                this->m_parent->close(this->m_socket);
            }

        private:
            friend class server;

            bool m_initialized = false;
            server* m_parent{};
            wolv::net::SocketHandle m_socket{wolv::net::SocketNone};
        };

        /**
         * Start a server on the given port
         * @param port The port to listen on
         * @param localOnly Whether to only listen on the local interface
         */
        explicit server(int port, bool localOnly = true) : wolv::net::SocketServer(port, 1024, 5, localOnly) {}

        /**
         * Start a server on the given port
         * @param port The port to listen on
         * @param numClients The maximum number of clients to accept
         * @param localOnly Whether to only listen on the local interface
         */
        explicit server(int port, int numClients, bool localOnly = true) : wolv::net::SocketServer(port, 1024, numClients, localOnly) {}

        /**
         * @brief Send data to all connected clients
         * @param data The data to send
         * @note This will not send to clients that have not yet completed the handshake
         */
        void sendAll(const std::string& data) {
            for(auto& [_, client] : this->m_clients) {
                client.send(data);
            }
        }

        /**
         * @brief Begin listening for connections
         */
        void listen() {
            while(this->isActive()) {
                wolv::net::SocketServer::accept([this](net::SocketHandle socket, std::vector<u8> data) {
                    return this->read(socket, std::move(data));
                }, [this](net::SocketHandle socket) {
                    auto &c = this->m_clients[socket];
                    if (this->m_onClose) this->m_onClose(c);
                    this->m_clients.erase(socket);
                }, true);
            }
        }

        inline bool isBound() {
            return wolv::net::SocketServer::isListening();
        }

        inline void setOnMessage(const std::function<void(const client&, const std::string&)>& callback) {
            m_onMessage = callback;
        }

        inline void setOnClose(const std::function<void(const client&)>& callback) {
            m_onClose = callback;
        }

        inline void setOnOpen(const std::function<void(const client&)>& callback) {
            m_onOpen = callback;
        }

    private:

        frame prepareCloseFrame(const std::string& reason) {
            frame f;
            f.header.fin = true;
            f.header.op = CLOSE;
            f.payload = {0x03, 0xE8}; // 1000
            f.payload.insert(f.payload.end(), reason.begin(), reason.end());
            f.payloadLength = f.payload.size();
            return f;
        }

        enum Mode {
            HTTP,
            WEBSOCKET
        };

        std::vector<u8> read(wolv::net::SocketHandle socket, std::vector<u8> data) {
            auto& c = this->m_clients[socket];
            if(c.m_socket == wolv::net::SocketNone) {
                c.m_socket = socket;
                c.m_parent = this;
                c.m_initialized = false;
            }
            auto it = this->m_clients.find(socket);
            if(!c.m_initialized) {
                // parse request
                auto request = util::parseHttpRequest(std::string(data.begin(), data.end()));
                if(request.headers["Upgrade"].empty()) {
                    return util::datarize("HTTP/1.1 400 Bad Request\r\n\r\nOnly accepting websocket requests\r\n");
                }
                // generate websocket key
                auto websocketKey = request.headers["Sec-WebSocket-Key"];
                auto newKey = websocketKey + "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
                auto sha1 = SHA1();
                sha1.update(newKey);
                auto hash = sha1.final_bytes();
                auto base64 = base64::encode({begin(hash), end(hash)});
                std::string response = std::string(
                        "HTTP/1.1 101 Switching Protocols\r\n"
                        "Upgrade: websocket\r\n"
                        "Connection: Upgrade\r\n"
                        "Sec-WebSocket-Accept: ") + base64 + "\r\n\r\n";
                if(this->m_onOpen) this->m_onOpen(c);
                c.m_initialized = true;
                return util::datarize(response);
            } else {
                frame f = decodeFrame(data);
                switch (f.header.op) {
                    case PING: {
                        // send pong, application data must be same as ping
                        return encodeFrame(createBinaryFrame(f.payload, PONG));
                    }
                    case PONG: {
                        if(pingCallbacks.find(socket) != pingCallbacks.end()) {
                            pingCallbacks[socket]();
                            pingCallbacks.erase(socket);
                        }
                        break;
                    }
                    case CLOSE: {
                        // close connection
                        if(this->m_onClose) this->m_onClose(c);
                        this->m_clients.erase(socket);

                        frame close_frame = prepareCloseFrame("Closed by server");
                        return encodeFrame(close_frame);
                    }
                    default: {
                        auto buffer = frameBuffer[socket];
                        if(f.header.fin) {
                            std::vector<u8> finalPayload;
                            if(buffer.empty()) {
                                finalPayload = f.payload;
                            } else {
                                // finish all frames
                                buffer.push_back(f);
                                for(auto& frame : buffer) {
                                    finalPayload.insert(finalPayload.end(), frame.payload.begin(), frame.payload.end());
                                }
                            }
                            if(this->m_onMessage) this->m_onMessage(c, std::string(f.payload.begin(), f.payload.end()));
                        } else {
                            buffer.push_back(f);
                            frameBuffer[socket] = buffer;
                        }
                    }
                }
                return {};
            }
        }
        std::map<wolv::net::SocketHandle, client> m_clients;
        std::function<void(const client&, const std::string&)> m_onMessage;
        std::function<void(const client&)> m_onClose;
        std::function<void(const client&)> m_onOpen;
        std::map<net::SocketHandle, std::vector<frame>> frameBuffer;
        std::map<net::SocketHandle, std::function<void()>> pingCallbacks;

        std::thread m_listenThread{};
    };

}